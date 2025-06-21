#include<stdio.h>
void reverse(int *arr,int size){
    int *start=arr;
    int *end= arr+size-1;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
void printArray(int *arr,int size){
    for(int i=0;i <size;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}

int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element");
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    printf("Reversed array is\n");
    printArray(arr,size);
    return 0;

}