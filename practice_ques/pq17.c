#include<stdio.h>
int main(){
    for(int i=1;i>=1;i++){
        int a;
        printf("give a no.:");
        scanf("%d",&a);
        if(a%2 != 0 ){
            printf("You have entered an odd no.");
            break;
        }
    }
}