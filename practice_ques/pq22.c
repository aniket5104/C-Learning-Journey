#include<stdio.h>
int main(){
    int n;
    printf("give a no.:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}