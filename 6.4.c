//Accept number from user and return multiplication of all digits

#include<stdio.h>

int Mult(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	int iDigit = 0;

	while(iNo != 0)
	{
	  iDigit = iNo % 10;
	  iMult = iMult * iDigit;
	  iNo = iNo/10;
	}
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = Mult(iValue);
	printf("Multiplication of digits is : %d",iRet);

	return 0;
}