/* Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)
Input : 23 30 
Output : 108 */

#include<stdio.h>

int AddEven(int iStart, int iEnd)
{
	int iCnt = 0;
	int iSum = 0;

	for(iCnt = iStart; iCnt <= iEnd; iCnt++)
	{
	   if(iCnt % 2 == 0)
	   {
	      iSum = iSum + iCnt;
	   }
	}
	return iSum;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter starting point\n");
	scanf("%d",&iValue1);

	printf("Enter ending point\n");
	scanf("%d",&iValue2);

	iRet = AddEven(iValue1, iValue2);
	printf("Addition is : %d",iRet);

	return 0;
}