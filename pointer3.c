#include<stdio.h>
int main(){
    int a[4] = {1,2,3,4};
    int *p[4] = {a,a+1,a+2,a+3};
    printf("%u , %u, %u",p,*p,*(*p)); //
    return 0;

}