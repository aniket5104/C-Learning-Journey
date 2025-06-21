#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    printf("The sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }    
    return 0;
}