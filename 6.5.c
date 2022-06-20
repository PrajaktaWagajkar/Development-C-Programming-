//Accept number from user and return difference between summation of even digits and summation of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;
	int iSumEven = 0;
	int iSumOdd = 0;
	int iDiff = 0; 

	while(iNo != 0)
	{
	   iDigit = iNo % 10;

	   if(iDigit % 2 == 0)
	   {
	      iSumEven = iSumEven + iDigit;
	   }
	   else
	   {
          iSumOdd = iSumOdd + iDigit;
	   }

	   iNo = iNo /10;

	}
    iDiff = iSumEven - iSumOdd;

	return iDiff;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = CountDiff(iValue);
	printf("Difference is : %d",iRet);

	return 0;
}