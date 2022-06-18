// Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo1; iCnt++)
	{
	   printf("*\n");
	}
}
int main()
{
	int iNo = 0;

	printf("Enter the number\n");
	scanf("%d",&iNo);

	Display(iNo);

	return 0;
}