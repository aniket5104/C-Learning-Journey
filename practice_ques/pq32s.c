#include<stdio.h>
float converter(int c);
int main(){
    int a;
    printf("Enter Temperature in Celsius: ");
    scanf("%d",&a);
    printf("the value of %dC in Farenheit is: %f",a,converter(a));
    return 0;
}
float converter(int c){
    return("%f", (c*1.8)+32);
    
}