/* Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9)) */

#include<stdio.h>

double FhtoCs(float fValue1)
{
	float fAns = 0.0;

	fAns = ((fValue1 - 32) * (5.0/9.0));

	return fAns;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter the temperature in Fahrenheit\n");
	scanf("%f",&fValue);

	dRet = FhtoCs(fValue);
	printf("Temperature in Celsius is : %f",dRet);

	return 0;
}