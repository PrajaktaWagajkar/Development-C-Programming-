 /* Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter) */

 #include<stdio.h>

 int KMtoMeter(int iNo)
 {
     int iAns = 0;

     iAns = 1000 * iNo;

     return iAns;
 }

 int main()
 {
     int iValue = 0;
     int iRet = 0;

     printf("Enter the distance in kilometer\n");
     scanf("%d",&iValue);

     iRet = KMtoMeter(iValue);
     printf("Distance in Meter is : %d",iRet);

     return 0;
 }