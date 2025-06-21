#include<stdio.h>
void swap(int x,int y);//call by value
int main(){
    int a=3,b=4;
    swap(a,b);//value of a and b being passed //value of x and y will be swapped
    printf("a=%d and b=%d\n",a,b);//value of a and b will not be swapped despite being passed in swap fn
    return 0;
}
void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d and y=%d\n",x,y);
}