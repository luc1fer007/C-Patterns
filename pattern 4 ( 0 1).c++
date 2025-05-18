//tight angle triangle
//print the (1 ) value;
//          (0 0) value;  

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
            printf("%d ",row % 2); //if row is even then it will be 0 other wise it will print the "reminder";
          
        }
        printf("\n");
        
    }
    
}