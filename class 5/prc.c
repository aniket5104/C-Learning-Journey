#include<stdio.h>
int main(){
    int cp, sp;
    printf("Enter Selling Price");
    scanf("%d",&sp);
    printf("Enter Cost Price");
    scanf("%d",&cp);
    if(sp>cp){
        printf("Profit");
        printf("profit = %d",sp - cp);
    }
    else if(cp>sp){
        printf("loss\n");
        printf("lost = %d",sp - cp);
    }
    else{
        printf("Net Profit is zero");
    }
    return  0;
}