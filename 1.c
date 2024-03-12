#include<stdio.h>
int main()
{
    int num = 1,n;
    printf("enter the number: \n");
    scanf("%d", &n);
    for (num = 1; num <= n; num++)
    {
        if (num%2!=0)
        {
            printf("%d \n", num);
        }
        

    }
    
    

    return 0;
    
}