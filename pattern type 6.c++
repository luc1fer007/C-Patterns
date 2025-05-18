/*
    *
   **
  ***
 ****
*****
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
       for(int row = 1; row<=n ; row++)
    {
        for(int col = 1 ; col <= n-row ; col++) //its for column only;;
        {
            printf(" "); //printing space;
        }
        for(int col = 1 ; col <= row ; col++)
        {
            printf("*");   //add some space left or right makes it a triangle// 
        }
        printf("\n");
    }
    for(int row = n ; row>=1 ; row--)
    {
        for(int col = 1 ; col <= n-row ; col++) //its for column only;;
        {
            printf(" "); //printing space;
        }
        for(int col = 1 ; col <= row ; col++)
        {
            printf("*");   //add some space left or right makes it a triangle// 
        }
        printf("\n");
    }
}