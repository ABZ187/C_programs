#include<stdio.h>
void swap(int*,int*);
int main(){
    int a=1,b=2;
    swap(&a,&b);
    printf("\nSwapped values %d %d",&a,&b);
}
void swap(int* x,int* y){
    int a;
    printf("*x %d *y %d\nx %d y %d",*x,*y,x,y);
    a=*x;
    *x=*y;
    *y=a;
}