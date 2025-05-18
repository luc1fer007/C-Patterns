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
            printf("%C ",row +64); //if 1st is 1 then 64 + 1 = 65 which is 'A';
        }
        printf("\n");
    }
    //now if u need to print small letter alphabets
     for(row = n ; row >= 1 ; row--)  //the loop will start from n and it will decrease gradually;
    {
        for(col = 1 ; col <= row ; col++)
        {
            printf("%C ",row +96); //if 1st is 1 then 96 + 1 = 97 which is 'a';
        }
        printf("\n");
    }
    
}