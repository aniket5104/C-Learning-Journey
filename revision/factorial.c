#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("the factorial of %d is = %d",n,f);
    return 0;

}