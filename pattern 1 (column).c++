//tight angle triangle
//print the column value;

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = 1 ; row <= n; row++) //for loops for row
    {
        
        for(int col = 1 ; col <= row ; col++) //for loops for column
        {
          //printf("%d ",col); //print the col value
          printf("%d ",row);
        }
        printf("\n");
        
    }
    
}