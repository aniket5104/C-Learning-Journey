//write a program to check whther a student pased or failed in exam. marks>30 is passed 
#include<stdio.h>
int main(){
    int a ;
    printf("no. of marks scored:");
    scanf("%d",&a);
    if(a>=30 && a<=100){
        printf("passed");
    }
    else if(a<30){
        printf("failed");
    }
    else{
        printf("wrong marks");
    }
    return 0;
}