#include<stdio.h>
int main(){
    int n,f=1;
    printf("enter n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        f=f*i;
    }
    printf("The factorial is %d",f);
    return 0;
}