#include<stdio.h>
int EvenOdd(int,int);
void main(){
    int m,n,result;
    printf("\nEnter the range ");
    scanf("%d%d",&m,&n);
    result=EvenOdd(m,n);
}
int EvenOdd(int m,int n){
    if (m==n+1){
        return 0;
    }
    else {
        if (m%2==0){
            printf("\n%d is even",m);
        }
        else{
            printf("\n%d is odd",m);
        }
        EvenOdd(m+1,n);
    }
}