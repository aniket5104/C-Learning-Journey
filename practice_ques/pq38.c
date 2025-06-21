#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a=3;
    int b=4;
    swap(&a,&b);
    printf("a=%d & b=%d\n",a,b);
    return 0;

}
void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}