//upper triangle pattern forming

//it will start from longer but the row will start from (1 - 10);
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = n ; row >=1 ; row--) //it will start from high to low in order to print upper triangle;
    {
        for(int col = 1 ; col <= row ; col++) //column will be same as row
        {
            printf("%d ",row);
            
        }printf("\n");
    }
}

//same code but now row will print the reverse like (10 - 1);


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = n ; row >=1 ; row--) //it will start from high to low in order to print upper triangle;
    {
        for(int col = row ; col >= 1 ; col--) //just start the row from row number and decrement it,alse >= 1; 
        {
            printf("%d ",row);
            
        }printf("\n");
    }
}
