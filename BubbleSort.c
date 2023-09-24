#include<stdio.h>

void swap(int *list1,int *list2){
    int temp;
    temp = *list1;
    *list1 = *list2;
    *list2 = temp;
}

int main(){
    int n=5,i,j;
    int list[n];
    for(i=0;i<n;i++){
        printf("Enter %d element\n",i+1);
        scanf("%d",&list[i]);
    }

    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++){
            if(list[i]>list[i+1]){
                swap(list+i,list+i+1);
            }
        }
    }

    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\n",list[i]);
    }
    return 0;
}