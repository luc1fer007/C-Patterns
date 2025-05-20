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
            printf("%c ",row+96); // 96 for 'a' cause , 96 + 1 =  97 = 'a';
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
            printf("%c ",col+96); //col will print small letters /
        }
        printf("\n");
    }
}