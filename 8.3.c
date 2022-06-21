/* Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)
Input : 23 30 
Output : 21 */

#include<stdio.h>

int Addition(int iStart , int iEnd)
{
	int iCnt = 0;
	int iSum = 0;

	for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
	{
	   iSum = iSum + iCnt;
	}

	return iSum;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter the starting point\n");
	scanf("%d",&iValue1);

	printf("Enter the ending point\n");
	scanf("%d",&iValue2);

	iRet = Addition(iValue1, iValue2);
	printf("Addition is : %d",iRet);

	return 0;
}