#include<stdio.h>//input n and tell whther positive or neg if postuve tell odd or even
int main(){
    int n;
    printf("Entre the no.");
    scanf("%d",&n);
    if(n>0){
        printf("\n+ive");
        if(n%2==0){
            printf("\neven");
        }
        else{
            printf("\nodd");
        }
    }
    else if(n==0){
        printf("\nzero is neither +ive nor -ve");
    }
    else{
        printf("\n-ve");
    }
    return 0;
}