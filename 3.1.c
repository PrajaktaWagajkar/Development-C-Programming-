// Accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt = 1;

	if(iNo < 0)
	{
	   iNo = -iNo;

	}

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
	   printf("%d\n",iCnt*2);;
	}
}

int main()
{
	int iValue =0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}