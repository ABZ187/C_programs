#include<stdio.h>

int main(){
    int *p; 
    int *fun(); //func. returning a pointer
    p = fun();
    printf("The value of p = %d",*p);
    return 0;
}
int *fun() {
    int static i=10;   //doesn't workk without static
    return (&i);
}