//MergeSort
#include<stdio.h>
void merge(int arr[],int l,int m,int r ){
    int b[r],i=l,j=m,k=i;
    while(i<m && j<r){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            k++;
            }   
        else{
            b[k]=arr[j];
            j++;
            k++;
        } 
    }

    while(i<=m){
        b[k]=arr[i];
        k++;
        i++;
    }

    while(j<=r){
        b[k]=arr[j];
        k++;
        j++;
    }

    for(i=0;i<=r;i++){
        arr[i]=b[i];
    }

}

void mergesort(int arr[],int l,int m, int r){
    if(l<r){
        r = m;
        m = (l+r)/2;
        ////////
        mergesort(arr,l,m,r);
        mergesort(arr,m,,r);
    }
}
int main(){
    int arr[]={1,7,31,2,4,6},i;
    int l=0,r=sizeof(arr)/sizeof(arr[0]),m=(r+l)/2;
    printf("l %d, m %d, r %d\n",l,m,r);
    for(i=0;i<r;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    merge(arr,l,m,r);
    for(i=0;i<r;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}