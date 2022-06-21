/* Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height) */

#include<stdio.h>

double RectArea(float fwidth, float fheight)
{
	double dAns = 0.0;

	dAns = fwidth * fheight;

	return dAns;
}
int main()
{
	float fValue1 = 0.0;
	float fValue2 = 0.0;
	double dRet = 0.0;

	printf("Enter the width and height\n");
	scanf("%f%f",&fValue1,&fValue2);

	dRet = RectArea(fValue1, fValue2);

	printf("Area of Rectangle is %f",dRet);

	return 0;
}