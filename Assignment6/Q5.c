// Check weather the number is prime in the range

#include<stdio.h>
#include<math.h>
void main(){
    int n,m,f,i;
    printf("\nEnter the beginning of the range. ");
    scanf("%d",&n);
    printf("\nEnter the ending of the range. ");
    scanf("%d",&m);
    for(;n<m;n++){
        for(i=2; i<=sqrt(n);i++){
            f=0;
            if(n%i==0){
                f=1;
                break;
            }
        }
        if(f==0){
        printf("\n%d is prime number",n);
    } 
    }
}