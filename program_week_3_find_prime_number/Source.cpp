#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Prime_number(int num);
void main()
{
	int input;
	printf("Enter any number : ");
	scanf("%d", &input);
	Prime_number(input);
}
int Prime_number(int num)
{
	if (num > 1)
	{
		for (int x = 2; x <= num; x++)
		{
			if (num % x == 0)
			{
				if (x == num)
				{
					return printf("%d is prime number", num);
				}
				else
				{
					return printf("%d is not prime number", num);
				}
			}
		}
	}
	else
	{
		return printf("%d is not prime number", num);
	}
}