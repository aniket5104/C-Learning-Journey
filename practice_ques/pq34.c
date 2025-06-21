#include<stdio.h>
int fib(int n);
int main(){
    int a;
    printf("enter n:");
    scanf("%d",&a);
    printf("%d",fib(a));
    return 0;
}
int fib(int n){
    if(n==1 || n==2){
        if(n==1){
            return 0;
        }
        if(n==2){
            return 1;
        }
    }
    int fnm1= fib(n-1);
    int fnm2= fib(n-2);
    int fn= fib(n-1)+fib(n-2);
    printf("fib upto %d is %d\n",n,fn);
    return fn;
}