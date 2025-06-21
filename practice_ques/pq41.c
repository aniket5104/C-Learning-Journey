#include<stdio.h>
int main(){
    int p[3];
    printf("Enter the price of 1st product:");
    scanf("%d",&p[0]);
    printf("Enter the price of 2nd product:");
    scanf("%d",&p[1]);
    printf("Enter the price of 3rd product:");
    scanf("%d",&p[2]);
    printf("MRP of produvts is %f,%f and %f",p[0]+p[0]*0.18,p[1]+p[1]*0.18,p[2]+p[2]*0.18);
    return 0;
}