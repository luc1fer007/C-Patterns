#include<stdio.h>
int main(void)
{
    int n,col;
    scanf("%d",&n);
    for(int row = 1 ; row <= n ; row++)
    {
        for(col = 1 ; col <= n - row ; col++)
        {
            printf("  "); //print extra space for balance;

        }
        for(col = 1 ; col <= (2*row -1) ; col++)
        {
            printf("%d ",col%2);
        }
        printf("\n");
    }
}