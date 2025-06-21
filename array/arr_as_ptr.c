#include<stdio.h>//accessing array elements using pointers
int main(){
    int num[]={24,34,12,44,56,17};
    int i, *ptr;
    ptr =&num[0];//assign address of 0th element
    for(i=0;i<=5;i++){
        printf("address = %u element = %d \n",ptr,*ptr);
        ptr++;//incremented pointer points to next element which reflects next time the loop runs. 
    }
    return 0;
}