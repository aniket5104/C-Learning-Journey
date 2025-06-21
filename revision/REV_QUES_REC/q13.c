#include<stdio.h>
int sumd(int n){
    if(n<10){
        return n;
    }
    else{
        return sumd(n/10)+ n%10;
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sumd(n));
    return 0;
}