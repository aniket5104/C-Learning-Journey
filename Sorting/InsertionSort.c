#include<stdio.h>
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int prev=i-1;
        int curr=arr[i];
        while (prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;

    }
}
int main(){
    int arr[]={2,3,1,4,5};
    insertionSort(arr,5);
    printf("the sorted array is: ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}