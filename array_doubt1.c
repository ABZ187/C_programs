#include<stdio.h>
void main(){
    int i;
    int arr[2][3]={1,2,3,4,5,6};
    for(i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("j=%d, i=%d, %d %d (*(arr+i)+j) %d %d,(arr+i) %d\n",j,i,arr[i][j],(*(arr+i)+j),*(*(arr+i)+j),(arr+i),&arr[i][j]);}
    }
            printf("%d",arr+1); //adding 1 to the array will skip to memory location of next row

}
