// Accept number from user and check whether it contains 0 or not

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL Check(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;

	if(iNo < 0)
	{
	   iNo = -iNo;
	}

	while(iNo != 0)
	{
	   iDigit = iNo % 10;
	   if(iDigit == 0)
	   {
	      return true;
	      iCnt++;
	   }
	   else
	   {
	      return false;
	   }
	}
}


int main()
{
	int iValue = 0;
	bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
       printf("It contains zero");
    }
    else
    {
       printf("It does not contain zero");
    }

    return 0;
}