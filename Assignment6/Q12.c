// Display first n fibonacci numbers
#include<stdio.h>
int fib(int);
void main(){
    int n,i=1,j=1,k;
    printf("\nEnter a number ");
    scanf("%d",&n);
    for(int m=1;m<=n;m++){

    }

}
fib(n){
    if(n==1){
        return 1;
    }
    return fib(n)+fib(n-1)
}