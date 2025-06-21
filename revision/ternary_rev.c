#include<stdio.h>
//check whether adult or not
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);

    age>=18 ? printf("Adult\n"): printf("not adult\n");
    return 0;
}