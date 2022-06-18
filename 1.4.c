//Accept one number from user and check whether it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL Check(BOOL iNo1)
{
	if((iNo1 % 5) == 0)
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
	int iNo = 0;
	BOOL bRet = false;

	printf("Enter the number\n");
	scanf("%d",&iNo);

	bRet = Check(iNo);

	if(bRet == true)
	{
	   printf("Divisible by 5\n");
	}

	else
	{
	   printf("Not Divisible by 5\n");
	}

	return 0;
}