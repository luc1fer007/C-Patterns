/*
5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/
#include<stdio.h>
int main(void)
{
    int n,row,col;scanf("%d",&n);
    for(row = 1 ; row <= n ; row++)
    {
        for(col = 1 ; col <= n - row ; col++) //its for printing space//
        {
            printf("  "); //using double space for balance
        }
        for(col = 1 ; col <= (2*row)-1 ; col++)
        {
            printf("$ ");
        }
        printf("\n");
    }
    for(row = n-1 ; row >= 1 ; row--) //using n-1 for not to print the double line//
    {
        for(col = 1 ; col <= n - row ; col++) //its for printing space//
        {
            printf("  "); //using double space for balance
        }
        for(col = 1 ; col <= (2*row)-1 ; col++)
        {
            printf("$ ",col%2);
        }
        printf("\n");
    }
}

/* if u want to print the alphabet use printf("%c",row+96 or row +66) it will print the row
if u want to print the column just remove the row and add the column*/
/*if u want to print the binary use printf("%d",col %2 or row % 2) if u want to print column or row*/ 