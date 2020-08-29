/*
3. Accept number of rows and number of columns from user and display below pattern. 

Input :  iRow = 3  iCol = 5  
Output : 5 4 3 2 1   
         5 4 3 2 1   
         5 4 3 2 1      
*/

#include<stdio.h> 

void Pattern(int iRow, int iCol) 
{
    int iCnt = 0;
    int iCnt1 = 0;

    if (iRow < 0 && iCol < 0)
    {
        iRow = -iRow;
        iCol = -iCol;
    }

    for(iCnt = 0 ;iCnt < iRow; iCnt++)
    {
        printf("\n");
        for(iCnt1 = iCol; iCnt1 >= 1 ;iCnt1--)
        {
            printf("%d ",iCnt1);
        }
    }

} 

int main() 
{  
    int iValue1 = 0, iValue2 = 0; 
 
    printf("Enter number of rows and columns");  
    scanf("%d %d",&iValue1, &iValue2); 
 
    Pattern(iValue1, iValue2); 
 
    return 0; 
}