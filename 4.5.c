// Accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int Diff(int iNo)
{
	int iSumFact = 0;
	int iSumNonFact = 0;
	int iCnt = 0;
	int iSumDiff = 0;

	for(iCnt = 1; iCnt <iNo; iCnt++)
	{
	   if(iNo % iCnt == 0)
	   {
	      iSumFact = iSumFact + iCnt;
	   }
	   else
	   {
	      iSumNonFact = iSumNonFact + iCnt;
	   }
	}

	iSumDiff = iSumFact - iSumNonFact;

	return iSumDiff;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = Diff(iValue);
	printf("Difference is : %d",iRet);

	return 0;
}