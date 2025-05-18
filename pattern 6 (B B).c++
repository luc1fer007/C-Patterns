//print the column with A
//print the column with A B C.....
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = 1 ; row <= n ; row++)
    {
        for(int col = 1 ; col <= row ; col++)
        {
            printf("%C ",64+row); //we now print the row with the ASCII value;
        }printf("\n");
    }
}