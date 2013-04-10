#include <stdio.h>
#include <stdlib.h>

int PowerFn (int no, int power)
{
	int j, ans;
	if (power == 0)
	{
		ans = 1;
	}
	else if (power == 1)
	{
		ans = no;
	}
	else
	{
		ans = no;
		for (j = 1; j < power; j++)
		{
			ans = ans*no;
		}
	}
	
	
	return ans;
}

int LengthFn (int input)
{
	int length, remainder, i;
	remainder = input;
	
	length = 0;
	while (remainder != 0)
	{
		remainder = (remainder / 10);
		//input = input - remainder;
		length ++;
	}	
	return length;
}

int IntDigitsLeft (int input)
{
	int OrderedNo = 0;
	int DigitsLeft = 0;
	
	DigitsLeft = input;
	while (DigitsLeft > 0)
	{
		int rem = DigitsLeft % 10;
		OrderedNo = (OrderedNo*10) + rem;
		DigitsLeft = DigitsLeft / 10;
	}
	return OrderedNo;
}

int GetLengthOfDecimalNumber (float DecimalInput)
{
	int numDigits = 0;
	while ((DecimalInput*PowerFn(10, numDigits))-((int)(DecimalInput*PowerFn(10, numDigits))) != 0)
	 {
		numDigits++;
     } 

	return numDigits;
}
