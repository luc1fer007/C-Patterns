/*
      1
     1  2
    1  2  3
   1  2  3  4
  1  2  3  4  5       print this rectangular shape pattern;
   1  2  3  4
    1  2  3
     1  2
      1
*/
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
            printf(" ",col);
        }
        for(col = 1 ; col <= row ; col++)
        {

            printf("  %d",col);
        }
        printf("\n");
    }
       for(row = n-1 ; row >= 1 ; row--)
    {
        //now its time to print space formula ( n - row) for loop needed;
        for(col = 1 ; col <= n - row ; col++)
        {
            printf(" ",col);
        }
        for(col = 1 ; col <= row ; col++)
        {

            printf("  %d",col);
        }
        printf("\n");
    }


}
