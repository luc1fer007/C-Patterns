//for columns+
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
            printf("%C",col+64); // for 'A' if u need 'a' then add 96;
        }
        printf("\n");
    }
}
//for rows 
// #include<stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     for(int row = 1; row<=n;row++)
//     {
//         for(int col = 1 ; col <= n-row ; col++) //its for column only;;
//         {
//             printf(" ");
//         }
//         for(int col = 1 ; col <= row ; col++)
//         {
//             printf("%C",row+64);
            
//         }
//         printf("\n");
//     }
// }