#include<stdio.h>
int main(){
    int age = 17;
    int *ptr= &age;
    int _age= *ptr;
    printf("%d",age);
    return 0;
}