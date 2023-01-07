#include<stdio.h>
int powe(int,int);
void main(){
    int m,n,result;
    printf("\nEnter the number and power ");
    scanf("%d%d",&m,&n);
    result=powe(m,n);
    printf("\n%d raised to %d is %d",m,n,result);
}
int powe(int m,int n){
    if (n==1){
        return m;
    }
    return m*powe(m,n-1);
}
