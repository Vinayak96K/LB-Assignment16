#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: Accepts two numbers from user and displays a particular pattern.
//  Input: int[IN,In]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int iCnt1,iCnt2;
    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }

    for(iCnt1=iRow;iCnt1>0;iCnt1--)
    {
        for(iCnt2=1;iCnt2<=iCnt1;iCnt2++)
        {
            printf("%d\t",iCnt2);
        }
        printf("\n");
    }
}