/*
FOR ROW it will print the alphabet;
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
            printf("%d ",row%2); //row will print 0 if its even//
        }
        printf("\n");
    }
}

//for col it will print the alphabet//
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
            printf("%d ",col%2); //col will print 0 if its even//
        }
        printf("\n");
    }
}