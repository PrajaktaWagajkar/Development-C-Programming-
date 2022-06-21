/* Write a program which accept range from user and display all even numbers in between that range.
Input : 23 35 
Output : 24 26 28 30 32 34 */

#include<stdio.h>

void Display(int iStart, int iEnd)
{
	int iCnt = 0;

	if(iStart > iEnd)
	{
		printf("Invalid Range");
	}

	for(iCnt = iStart; iCnt <= iEnd; iCnt++)
	{
	    if(iCnt % 2 == 0)
	    {
	       printf("%d\n",iCnt);
	    }
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter the starting point\n");
	scanf("%d",&iValue1);

	printf("Enter the ending point\n");
	scanf("%d",&iValue2);

	Display(iValue1, iValue2);

	return 0;
}