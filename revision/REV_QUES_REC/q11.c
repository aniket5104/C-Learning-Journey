#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int n){
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}