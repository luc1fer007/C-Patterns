//print the double loop pattern uppper to lower
#include<stdio.h>
int main(void)
{
    int n,row,col;
    scanf("%d",&n);    //i = row , j = col;
    for(row = 1 ; row <= n ; row++)
    {
        //now its time to print space formula ( n - row) for loop needed;
        for(col = 1 ; col <= n - row ; col++)
        {
            printf(" ");
        }
        for(col = 1 ; col <= row ; col++)
        {

            printf(" * ");
        }
        printf("\n");
    }
    


}
