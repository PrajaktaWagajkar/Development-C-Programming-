/* Write a program which accept range from user and display all numbers in between that range.
Input : 23 35 
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35 */

#include<stdio.h>

void Display(int iStart, int iEnd)
{
	int iCnt = 0;

	if(iStart > iEnd)
	{
		printf("Invalid Range");
	}

	for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
	{
	    printf("%d\n",iCnt);
	}

}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter starting point\n");
	scanf("%d",&iValue1);

	printf("Enter ending point\n");
	scanf("%d",&iValue2);

	Display(iValue1, iValue2);

	return 0;
}
