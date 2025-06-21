#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            break;//the loop will end as soon i=3
        }
        printf("%d\n",i);
    }

    printf("end");

    return 0;
}