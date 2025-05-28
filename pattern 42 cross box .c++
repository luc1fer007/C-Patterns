/*
6

            * * * * * *
            *         *
            *         *
            *         *
            *         *
            * * * * * *
 * * * * * *
 *         *
 *         *
 *         *
 *         *
 * * * * * *
*/

#include <stdio.h>
int main(){
    int k,row,col;
    scanf("%d",&k);
    printf("\n"); 
    for(row = 1 ; row <= k ; row ++)
    {
        for(col = 1 ; col <= 2*k-1 ; col++)
        {
            printf(" ");
        }
        for(col = 1 ; col <= k ; col++)
        {
            if(row==1 || row == k || col == 1 || col == k)
            {
                printf(" *");
            }
            else printf("  ");
        }
        printf("\n");
    }
       for(row = k ; row >=1 ; row --)
    {
        for(col = 1 ; col <= k ; col++)
        {
            if(row==1 || row == k || col == 1 || col == k)
            {
                printf(" *");
            }
            else printf("  ");
        }
        printf("\n");
    }


 
}