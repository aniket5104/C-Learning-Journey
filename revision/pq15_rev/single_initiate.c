#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int i,sum=0;
    for(i=n;i>=1;i--){// without multiple for loop and multiple
        printf("\n%d",i);
        sum=sum+i;
    }
    printf("\nthe sum of first %d natural no. is %d",n,sum);
    return 0;
}