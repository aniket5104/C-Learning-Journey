#include<stdio.h>
int main(){
    int a[2][3];
    a[0][0]=78;
    a[0][1]=87;
    a[0][2]=98;
    a[1][0]=99;
    a[1][1]=96;
    a[1][2]=76;
    printf("%d",a[0][0]);
    return 0;
}