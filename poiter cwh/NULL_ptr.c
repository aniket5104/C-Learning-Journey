#include<stdio.h>
int main(){
    int a;
    int *ptr_a=&a;
    int *ptr;
    int *null_ptr= NULL;
    printf("\nadress of a is= %p",ptr_a);
    printf("\nsome garbage adress is %p",ptr);
    printf("\n the value of null pointer is %p",null_ptr);
    return 0;
}