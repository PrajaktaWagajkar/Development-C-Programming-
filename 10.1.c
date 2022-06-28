/* Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 3
Output : 
 * * *
 * * *
 * * *
 * * *                   */

 #include<stdio.h>

 void Display(int iCol, int iRow)
 {
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
       for(j = 1; j <= iCol; j++ )
       {
          printf("*\t");
       }

       printf("\n");
    }
 }

 int main()
 {
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter number of column\n");
    scanf("%d",&iNo1);

    printf("Enter number of rows\n");
    scanf("%d",&iNo2);

    Display(iNo1, iNo2);

    return 0;
 }