//highest and lowest of an array
#include<stdio.h>
void main(){
    int i,j;
    int arr[3][5]={85,5,55.54,-55,5,0,59,289.6,-5,54,5,5,15,-5,0}, a,b;
    a=arr[0][0];
    b=arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]<a)
                a=arr[i][j];
            if(arr[i][j]>b)
                b=arr[i][j];
        }
    }
    printf("smallest no. %d\nbiggest no. %d",a,b);

}