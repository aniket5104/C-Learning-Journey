#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a=5,b=6;
    int *ptr_a=&a,*ptr_b=&b;
    swap(ptr_a,ptr_b);
    printf("\na=%d and b=%d",a,b);
    return 0;
}
void swap(int *x,int *y){
    
    int t ;
    t=*x;
    *x=*y;
    *y=t;
}