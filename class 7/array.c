#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter Marks in phy:");
    scanf("%d",&marks[0]);
    printf("Enter Marks in chem:");
    scanf("%d",&marks[1]);
    printf("Enter Marks in maths:");
    scanf("%d",&marks[2]);
    printf("phy=%d, chem=%d, maths=%d",marks[0],marks[1],marks[2]);
    return 0;
}