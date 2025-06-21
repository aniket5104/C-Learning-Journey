#include<stdio.h>
int fn(int arr[],int n);
int main(){
    int a[8]={5,76,54,87,98,12,65,75};
    printf("%d",fn(a,8));
    return 0;
}
int fn(int arr[],int n){
    int  count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}