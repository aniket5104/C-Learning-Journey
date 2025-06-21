#include<stdio.h>
/*write a program to calculate area 
of a circle.(side is given).*/
int main() {
    float Radius;
    printf("Radius=");
    scanf("%f", &Radius);
    printf("The Area of Circle is %f", Radius * Radius * 3.14);
    return 0;

}