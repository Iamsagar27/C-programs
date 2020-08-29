/*
5. Accept number of rows and number of columns from user and display below pattern. 

Input :  iRow = 3  iCol =  4  
Output : 1 1 1 1    
         2 2 2 2   
         3 3 3 3   
             
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

    for(iCnt = 1 ; iCnt <=iRow; iCnt++)
    {
        printf("\n");
        for(iCnt1 = 0; iCnt1 < iCol ; iCnt1++)
        {
            printf("%d ",iCnt);
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
