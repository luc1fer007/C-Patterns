#include<stdio.h>
int main(void)
{
    int n,row,col;
    scanf("%d",&n);
    for(row = 1 ; row <= n ; row++)
    {
        for(col = 1 ; col <= n-row ; col++)
        {
            printf(" ");
        }
        for(col = 1 ; col <= row ; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(row = n -1 ; row >= 1 ; row--) //use n-1 to avoid printing the same row //
    {
        for(col = 1 ; col <= n-row ; col++)
        {
            printf(" ");
        }
        for(col = 1 ; col <= row ; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}