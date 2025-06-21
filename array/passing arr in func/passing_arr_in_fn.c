#include<stdio.h>
void display1(int n);
void display2(int *n);
int main(){
    int marks[]={10,20,30,40,50,60};
    for(int i=0;i<=5;i++){
        display1(marks[i]);//call by value
    }
    printf("\n");
    for(int i=0;i<=5;i++){
        display2(&marks[i]);//call by reference
    }
    return 0;
}
void display1(int n){
    printf("%d\n",n);
}
void display2(int *n){
    printf("%d\n",*n);
}