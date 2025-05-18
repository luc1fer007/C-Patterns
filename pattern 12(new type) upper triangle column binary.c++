//code a pattern that the upper trinagle row will be print as 0(if even)
//also print as 1(if odd);
#include<cstdio>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row = n ; row >= 1 ; row--)  //the loop will start from n and it will decrease gradually;
    {
        for(col = 1 ; col <= row ; col++)
        {
            printf("%d ",row % 2);
        }
        printf("\n");
    }
}