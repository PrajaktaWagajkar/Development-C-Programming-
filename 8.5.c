/* Write a program which accept accept range from user and display all numbers in between that range in reverse order.
Input : 23 35 
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23 */

#include<stdio.h>

void Display(int iStart, int iEnd)
{
	int iCnt = 0;

	for(iCnt = iEnd ; iCnt >= iStart; iCnt-- )
	{
	   printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter the starting point \n");
	scanf("%d",&iValue1);

	printf("Enter the ending point\n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}