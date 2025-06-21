#include<stdio.h>
void ap(int ,float*,float*);
int main(){
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    float area, peri;
    float* a=&area;float *p=&peri;
    ap(r,a,p);
    printf("The area is %f and perimeter is %f",area,peri);
    return 0;
}
void ap(int r,float* a,float* p){
    *a= 3.14*r*r;
    *p= 2* 3.14* r;
}