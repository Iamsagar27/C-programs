/*
3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF. 
*/

#include<stdio.h>

typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBitX(int iNo)
{
    int iMask = 0X08104040;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
        
    bRet = CheckBitX(iNo);
    if(bRet == TRUE)
    {
        printf("7th , 15th , 21st , 28th bit is on\n");
    }
    else
    {
        printf("7th , 15th , 21st , 28th bit is Off");
    }
    return 0;
}