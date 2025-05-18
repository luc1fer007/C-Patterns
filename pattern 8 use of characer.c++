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
            printf("* "); //just print the character"*";
        }printf("\n");
    }
}

