#include<stdio.h>
// int sum_arr(int []); 
int sum_arr(int*);

void main(int argc,int argv[]){
    int arr[3];
    int sum;
    printf("Enter values of array\n");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);

    }
    printf("arr %d &arr %d\n",arr,&arr);
    sum=sum_arr(arr);
    printf("Sum is %d",sum);
}
// int sum_arr(int prr[]){
int sum_arr(int *prr){
    int i,sum=0;
    for(i=0;i<3;i++){
        sum=prr[i]+sum;
        // sum=*(prr+i)+sum;
    }
    return sum;
}