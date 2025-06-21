#include<stdio.h>
//check whther no. is +ive or -ve if +ve then check odd even.
int main(){
    int a;
    printf("ENter a no.");
    scanf("%d",&a);
    if(a>=0){
        printf("positive\n");
        if(a%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    else{
        printf("negative\n");
    }
    return 0;
}