// Accept number from user and check whether the number is even or odd

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL Check(int iNo)
{
	if( (iNo % 2) == 0)
	{
	   return true;
	}
	
	else
	{
	  return false;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = false;

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet = Check(iValue);

	if(bRet == true)
	{
	   printf("Number is even\n");
	}
	else
	{
	   printf("Number is odd\n");
	}

	return 0;
}