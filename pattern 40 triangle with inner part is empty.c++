#include<stdio.h>
int main(void)
{
    int n,row,col;
    scanf("%d",&n);
    for(row = 1 ; row <= n ; row ++)
    {
        for(col = 1 ; col <= row ; col++)
        {
            if((col == 1 || row == n || row == col))printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}