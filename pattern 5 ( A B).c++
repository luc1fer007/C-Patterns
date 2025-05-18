//print the column with A
//print the row with A B C.....
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = 1 ; row <= n ; row++)
    {
        for(int col = 1 ; col <= row ; col++)
        {
            printf("%C ",64+col); //we now print the column with the ASCII value;
        }printf("\n");
    }
}