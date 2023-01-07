#include<stdio.h>
#include "included.c" //externally included file
#define MAX 10
#define square(n) n*n
void main(){
    int i;
    print();
    for (i=0;i<MAX;i++){
        printf("\n%d",i);
    }
    printf("\nsquare %d",square(MAX));
    printf("\nsquare %d",square('a'));

}