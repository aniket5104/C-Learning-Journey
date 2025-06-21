#include<stdio.h>
void func1(int array[]);
void func2(int *ptr);
int main(){
    int arr[]={12,23,45,54};
    printf("The value at 0th index is %d\n",arr[0]);
    func1(arr);
    // func2(&arr);
    printf("The value at 0th index is %d",arr[0]);
    return 0;
}
void func1(int array[]){
    for(int i=0;i<=3;i++){
        printf("Element at %dth index is %d\n",i,array[i]);
    }
    //array[0]=543;//this will change the output of pritnf in line 9 as passing array is passing by reference.
}
void func2(int *ptr){
    for(int i=0;i<=3;i++){
        printf("Element at %dth index is %d\n",i,*(ptr+i));
    }
    *ptr=34;
}

