#include<stdio.h>

void swap(int *list1,int *list2){
    int temp;
    temp = *list1;
    *list1 = *list2;
    *list2  = temp;
}
int main(){
    int n=5,m=0,i,j;
    int list[n];
    for(j=0;j<n;j++){
        printf("Enter the %d element\n",j+1);
        scanf("%d",&list[j]);
    }

    for(j=0;j<n;j++){
        m = j;
        for(i=j;i<n;i++){
            if(list[m]>list[i]){
                m = i;
            }
        }
        swap(list+m,list+j);
    }
    for(j=0;j<n;j++){
        printf("%d\n",list[j]);
    }
    return 0;
}