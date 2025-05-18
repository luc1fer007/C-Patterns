//print the double loop pattern uppper to lower 
//its for col only;
#include<stdio.h>
int main(void)
{
    int n,i,j;
    scanf("%d",&n);    //i = row , j = col;
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("%C ",j+64);          // it was for col only..
            
        }
        printf("\n");
    }
    for(i = n-1 ; i >= 1 ; i--) //if u dont need to print the max num 2 times then use start with n - 1 ;
    {
        for( j = 1 ; j <= i ; j++) //otherwise use n
        {
            printf("%C ",j+64);
        }
        printf("\n");
    }
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("%C ",j+96);          // it was for col only..
            
        }
        printf("\n");
    }
    for(i = n-1 ; i >= 1 ; i--) //if u dont need to print the max num 2 times then use start with n - 1 ;
    {
        for( j = 1 ; j <= i ; j++) //otherwise use n
        {
            printf("%C ",j+96);
        }
        printf("\n");
    }

}