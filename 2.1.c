// Accept one number from user and display that number of * on screen

#include<stdio.h>

void Display(int iNo1)
{
	int iCnt = 1;

	while(iCnt <= iNo1 )
	{
	   printf("*\n");
	   iCnt++;
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