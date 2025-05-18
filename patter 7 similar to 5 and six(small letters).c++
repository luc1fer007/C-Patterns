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
            printf("%C ",96+col); //96 + 1 = 97 which as value of 'a';
            //we now print the column with the ASCII value(a = 97);
        }printf("\n");
    }
}

//print the row which will be same as each rows
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
            printf("%C ",96+row); //96 + 1 = 97 which as value of 'a';
            //we now print the column with the ASCII value(a = 97);
        }printf("\n");
    }
}


