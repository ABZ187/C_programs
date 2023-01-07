#include<stdio.h>
int EvenOdd(int,int);
int palindrome(int);
void main(){
    int m,n,result;
    printf("\nEnter the number ");
    scanf("%d",&m);
    result=palindrome(m);
    printf("%d ",result);
}

int palindrome(int n){
    int reverse,m;
    if (n==0){
        return 0;
    }
    reverse=n%10;
    return (reverse+palindrome(n/10))*10;
}
