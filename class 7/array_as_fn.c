#include<stdio.h>
void fn(int arr[5]);
int main(){
    int a[]={1,2,3,4,5,};
    fn(a);
    return 0;
}
void fn(int arr[5]){
    for(int i=0;i<=4;i++){
        printf("%d\t",arr[i]);
    }
}