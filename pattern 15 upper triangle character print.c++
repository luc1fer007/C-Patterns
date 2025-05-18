//Upper case character print
#include<cstdio>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int row = n ; row >= 1 ; row--)
    {
        for(int col = 1 ; col <= row ; col++)
        {
            printf("* # ");
        }
        printf("\n");

    }
}