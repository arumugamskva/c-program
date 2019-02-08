#include<stdio.h>
int main()
{
    int a,b,power=1,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<=b;i++)
    power=power*b;
    printf("%d^%d=%d",a,b,power);
    return 0;
}
.
