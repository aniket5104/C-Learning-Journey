#include<stdio.h>
void rev(int x[],int n);
void pr(int x[],int n);
int main(){
    int a[3];
    printf("Enter 1st digit :");
    scanf("%d",&a[0]);
    printf("Enter 2nd Digit :");
    scanf("%d",&a[1]);
    printf("Enter 3rd Digit :");
    scanf("%d",&a[2]);
    rev(a,3);
    pr(a,3);
    return 0;
}
void rev(int x[],int n){
    for(int i=0;i<=n/2;i++){
        int org=x[i];
        int reverse=x[n-i-1];
        x[i]=reverse;
        x[n-i-1]=org;
   }
}
void pr(int x[],int n){
    for(int j=0;j<n;j++){
        printf("%d\t",x[j]);
    }
}
