#include<stdio.h>
int facto(int n);
int main(){
    int a;
    printf("Enter a no.:");
    scanf("%d",&a);
    printf("The Factorial of %d is %d",a,facto(a));
    return 0;
}
int facto(int n){
    if(n==1){
        return 1;
    }
    int f;
    f=facto(n-1)*n;

}