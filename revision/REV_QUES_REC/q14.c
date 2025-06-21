#include<stdio.h>
int swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
} 
int gcd(int a,int b){
    if(b%a==0){
        return a;
    }
    else{
        return gcd(b%a,a);
    }
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    if(b<a){
        swap(&a,&b);
    }
    printf("The GCD of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}