#include<stdio.h>
int main(){

    int a,i=1;
    printf("Enter a");
    scanf("%d",&a);
//using while
    // while(i<=a){
    //     printf("%d\n",i);
    //     i++;
    // }
//using for
    for(i=1,i<=a,i++){
        printf("%d\n",i);
    }

    return 0;
}