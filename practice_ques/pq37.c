#include<stdio.h>
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("the value of i is %d ",**pptr);
    return 0;
}