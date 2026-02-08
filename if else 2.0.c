#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(12>n)
    {
        printf("Free",n);
    }

     if(12<n)
    {
        printf("Yes and ticket cost $5",n);
    }
    else if (60<n)
    {
        printf("ticket cost $7",n);
    }
    else{
        printf("ticket cost $10",n);
    }
    return 0;
}
