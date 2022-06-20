// Accept a number from user and count frequency of 2 in it

#include<stdio.h>

int Freq(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;

	while(iNo != 0)
	{
	    iDigit = iNo % 10;
	    if(iDigit == 0)
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

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = Freq(iValue);
	printf("Frequency of two,s is : %d",iRet);

	return 0;
}