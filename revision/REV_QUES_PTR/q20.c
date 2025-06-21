#include<stdio.h>
int main(){
    int a=2,b=9;
    int *ptr=&a,*ptr2=&b;
    int t=*ptr;
    *ptr=*ptr2;
    *ptr2=t;
    printf("a=%d b=%d",a,b);
    return 0;
}