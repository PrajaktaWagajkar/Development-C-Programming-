/* Write a program which accept radius of circle from user and calculate its area.Consider value of PI as 3.14. (Area = PI * Radius * Radius) */

#include<stdio.h>
//#define PI 3.14

double AreaCircle(float fValue)
{
	double dArea = 0.0;
	float fPI = 3.14;
    
    dArea = fPI * fValue * fValue;

    return dArea;

}

int main()
{
	float fRadius = 0.0;
	double dRet = 0.0;

	printf("Enter the radius of circle\n");
	scanf("%f",&fRadius);

	dRet = AreaCircle(fRadius);

	printf("Area of circle is : %f",dRet);

	return 0;
}