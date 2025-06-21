#include<stdio.h>
int main(){
    int a;
    printf("give a no.:");
    scanf("%d", &a);
    if(a>=0){
        printf("positive\n");
        if(a % 2==0){
            printf("even");
        }
        else{
            printf("odd");
        }
    }
    else{
        printf("negative");
        }
    return 0;
}