// Accept number from user and return the count of odd digits

#include<stdio.h>

int CountOdd(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;

	while(iNo != 0)
	{
	   iDigit = iNo % 10;

	   if(iDigit % 2 != 0)
	   {
	      iCnt++;
	   }
	   iNo = iNo / 10;
	}

	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Emter the number\n");
	scanf("%d",&iValue);

	iRet = CountOdd(iValue);

	printf("Number of odd digits are : %d",iRet);

	return 0;
}