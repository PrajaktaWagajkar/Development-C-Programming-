// Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo, int iFreq)
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iFreq; iCnt++)
	{
	    printf("%d\n",iNo);
	}
}

int main()
{
	int iValue = 0;
	int iCount = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	printf("Enter the number\n");
	scanf("%d",&iCount);

	Display(iValue,iCount);

	return 0;
}