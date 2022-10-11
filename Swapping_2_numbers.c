#include<stdio.h>
int main()
{   int a,b;
    printf("Enter two integers");
    scanf("%d%d",&a,&b);
    printf("Values before swapping %d %d\n",a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("Values after swapping %d %d",a,b);
    return 0;
}