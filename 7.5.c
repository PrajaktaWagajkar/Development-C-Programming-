/* Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter) */

#include<stdio.h>

double SquareMeter(float fValue)
{
	float fAns = 0;

	fAns = fValue * 0.0929;

	return fAns;
}

int main()
{
	float fArea = 0.0;
	float fRet = 0.0;

	printf("Enter the area in square feet\n");
	scanf("%f",&fArea);

	fRet = SquareMeter(fArea);
	printf("Area in Square Meter is : %f",fRet);

	return 0;
}