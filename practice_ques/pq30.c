#include<stdio.h>
int sum(int n);
int main(){
    int a;
    printf("Enter a no.");
    scanf("%d",&a);
    printf("The sum of first %d natural no.s is %d",a,sum(a));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int Snm1= sum(n-1);
    int s= sum(n-1) + n;
}