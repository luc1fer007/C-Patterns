/*
5
5 5 5 5 5 5 5 5 5 
  4 4 4 4 4 4 4 
    3 3 3 3 3 
      2 2 2 
        1 
*/

#include<stdio.h>
int main(void)
{
    int n,col;
    scanf("%d",&n);
    for(int row = n ; row >= 1 ; row--)
    {
        for(col = 1 ; col <= n - row ; col++)
        {
            printf("  "); //print extra space for balance;

        }
        for(col = 1 ; col <= (2*row -1) ; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
}