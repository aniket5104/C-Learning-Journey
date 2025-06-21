#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("enter first no.:");
    scanf("%d", &a);
    printf("enter second no.:");
    scanf("%d",&b);
    int s= sum(a,b);
    printf("%d",s); 
    return 0;
}
int sum(int a, int b){
    return a+b;
}