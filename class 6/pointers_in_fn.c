#include<stdio.h>
void square(int n);
void sq(int *n);
int main(){
    int a;
    printf("enter a no.:");
    scanf("%d",&a);
    square(a);
    printf("the no. is %d\n",a);// a will not change its value as fn just operated by value of a
    sq(&a);
    printf("the no. is: %d",a);// a will change its value as fn operated by address of a
    return 0;
}
void square(int n){
    n=n*n;
    printf("sq is %d\n",n);
}
void sq(int *n){
    *n=(*n)*(*n);
    printf("sq is %d\n",*n);
}

