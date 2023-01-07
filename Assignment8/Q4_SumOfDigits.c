#include<stdio.h>
int SumOfDigits(int);
void main(){
    int n,result;
    printf("\nEnter the number ");
    scanf("%d",&n);
    result=SumOfDigits(n);
    printf("\nSum of digits is %d",result);
}
int SumOfDigits(int n){
    int r;
    if (n==0){
        return 0;
    }
    r=n%10;
    n=n/10;
    return r+SumOfDigits(n);
}