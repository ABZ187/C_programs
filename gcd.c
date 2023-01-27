#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
    int n,m,i;
    printf("Enter the first integer\n");
    scanf("%d",&n);
    printf("Enter the second integer\n");
    scanf("%d",&m);
    n=abs(n);
    m=abs(m);
    if(n>m){
        i=m;
        }
    else{
        i=n;
    }
    for(int j=1;j<=sqrt(i);j++){
        if(n%(i/j)==0 && m%(i/j)==0){
            printf("GCD is %d",i/j);
            break;
        }
    }
}