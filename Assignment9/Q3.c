//write a program to count frequency of a number in array

#include<stdio.h>
void main(){
    int i,j,n,a,b;
    int arr[100]={0},brr[100][2]={0};
    printf("Enter the no. of no.s you want to enter(<100)");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter the no.");
        scanf("%d",&arr[i]);
        }
    // for(i=0;i<n;i++){
    //     printf("\n%d",arr[i]);
    // }
    for(i=0;i<n;i++){
        for(j=i,a=1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("hey");
                a++;
                arr[j]=0;
            }
        brr[i][0]=arr[i];
        brr[i][1]=a;
        }
        }
    for(i=0;i<n;i++){
        printf("\n%d %d",brr[i][0],brr[i][1]);
    }
    
}
        