#include<stdio.h>
int main(void)
{
    int n,row,col;
    scanf("%d",&n);
    for(row = 1 ; row <= n ; row ++)
    {
        for(col = 1 ; col <= n ; col++)
        {
            if((row==1 || row == n) || (col == 1 || col == n))printf("*");//dont use space it will not match//
            else printf(" "); ////use else and space to adjust the lining//
        }
        
        printf("\n");
    }
}