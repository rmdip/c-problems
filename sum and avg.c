#include<stdio.h>
int main ()
{
    int a,b,c,d,e,sum;
    float avg;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=(float)sum/5;
    printf("Value of Sum=%d\n",sum);
    printf("Value of Average=%2f\n",avg);
    return 0;
}
