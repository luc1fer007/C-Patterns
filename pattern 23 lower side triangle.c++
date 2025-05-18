#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int row = 1; row<=n;row++)
    {
        for(int col = 1 ; col <= n-row ; col++) //its for column only;;
        {
            printf(" ");
        }
        for(int col = 1 ; col <= row ; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}

//for rows 
#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int row = 1; row<=n;row++)
    {
        for(int col = 1 ; col <= n-row ; col++) //its for column only;;
        {
            printf(" ");
        }
        for(int col = 1 ; col <= row ; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}