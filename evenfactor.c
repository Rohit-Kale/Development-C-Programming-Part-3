/*  Write a program which accept number from user and print even factors of 
that number */

#include<stdio.h>
#include<stdlib.h>

void EvenFact(int iNo)
{
	int i = 0;

	if(iNo <= 0)
	{
		iNo = -iNo;
	}

	for(i = 1; i <= iNo / 2; i++)
	{
		if(iNo%i == 0 && i%2 == 0)
		{
			
			printf("%d",i);

		}
	}
}

int main()
{
	int iValue = 0;

	printf("Enter NUmber\n");
	scanf("%d",&iValue);

	EvenFact(iValue);

}