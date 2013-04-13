#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

long int PseudoRand (long int a, long int b, long int m)
 {
	 //This one accepts the a b and m values if you want to make the function more advanced
	 time_t now;
	 long int x1;
	 long int x0 = time(&now);
	//this is a cyclic division pseudo random number generator
	//It functions in a very long cycle of random numbers which holds true
	//for the guassian normal curve
	//time is used as an initial value since its pretty much as random as a computer can be
	//without radioactive materials
	  //a b and m should be very large numbers 10^10 for instance but here its ok for alright pseudo random numbers
	 //this method is still very predictable
	
	x1 = (a*x0+b) % m;

	return x1;
}
THERE ARE STILL PROBLEMS WITH PSEUDO RAND FUNCTIONS

 long int PseudoRandGen (long int a, long int b, long int m)
 {
	 time_t now;
	 long int x1;
	 long int x0 = time(&now);
	//this is a cyclic division pseudo random number generator
	//It functions in a very long cycle of random numbers which holds true
	//for the guassian normal curve
	//time is used as an initial value since its pretty much as random as a computer can be
	//without radioactive materials

	//this method is still very predictable
	//will use time to generate a b and m
	 //a b and m should be very large numbers 10^10 for instance but here its ok for alright pseudo random numbers
	a = ((time(&now))*44)%5556;
	b = ((time(&now))*876)%5556;
	m = ((time(&now))*78)%5556;

	x1 = (a*x0+b) % m;

	return x1;
 }
