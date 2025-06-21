#include<stdio.h>
int main(){
    int a,i;
    do{
        printf("enter a no.:");
        scanf("%d",&a);
        if(a % 7 == 0){
            printf("The no. is not a multiple of 7");
            break;
        }

    }
    while(i>=1);{
        i++;
    }
    return 0;
}