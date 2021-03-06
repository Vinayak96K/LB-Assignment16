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

    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
           if((iCnt1==1)||(iCnt1==iRow)||(iCnt2==1)||(iCnt2==iCol))
           {
               printf("%d\t",iCnt2);
           }
           else
           {
               printf("*\t");
           }
        }
        printf("\n\n");
    }

}