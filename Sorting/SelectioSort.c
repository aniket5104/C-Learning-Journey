#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(&arr[i],&arr[smallest]);
    }
}
int main(){
    int arr[]={5,3,4,1,2};
    selectionSort(arr,5);
    printf("The Reversed Array is: ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
