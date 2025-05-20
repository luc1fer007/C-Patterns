/*
    5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/
#include<stdio.h>
int main(void)
{
    int n,row,col;
    scanf("%d",&n);
    for(row = 1 ; row <= n ; row++)
    {
        for(col = 1 ; col <= n - row ; col++)
        {
            printf("  "); //print"  " extra space to balane the space ;
        }
        for(col = 1 ; col <= ((2*row) - 1) ; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}