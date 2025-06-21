#include<stdio.h>
float percent(int p, int q, int r);
int main(){
    int sc, ma,sa;
    printf("Enter marks in Sci: ");
    scanf("%d",&sc);
    printf("Enter marks in Maths: ");
    scanf("%d",&ma);
    printf("Enter marks in Sanskrit: ");
    scanf("%d",&sa);
    printf("The percentage of marks is:%f",percent(sc,ma,sa));
    return 0;
}
float percent(int p, int q, int r){
    float f=(p+q+r)/3;
    return f;
}
 