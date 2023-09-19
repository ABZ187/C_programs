#include<stdio.h>
int main(){
    int arr[][4] = { 1,2,3,4,
                     5,6,7,8,
                     9,10,11,12};
    int (*q)[4] = arr;  //pointer to an array of 4 elements
    int *p = (int*)arr; //integer pointer
    printf("address of p %u, q %u",p,q);
    p++; // increments as size of int
    q++; // increment as size of int array
    printf("\naddress of p %u, q %u",p,q);

    return 0;
}