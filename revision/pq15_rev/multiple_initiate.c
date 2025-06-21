#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int i=1,j;
    int sum=0;
    for(i=1,j=n;i<=n && j>=1;i++,j--){
        sum=sum+i;
        printf("%d\n",j);
    }
    printf("The sum of first %d natural no.s is %d\n",n,sum);
    return 0;
}