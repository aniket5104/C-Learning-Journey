#include<stdio.h>
int main(){
    int i=3, *x;
    float j=1.5, *y;
    char k='c', *z;
    printf("Value of i is %d\n",i);
    printf("Value of j is %f\n",j);
    printf("Value of k is %c\n",k);
    x= &i;
    y= &j;
    z= &k;
    printf("Original address in x is %u\n",x);
    printf("Original address in y is %u\n",y);
    printf("Original address in z is %u\n",z);
    x++;y++;z++;
    printf("New address in x is %u\n",x);//increment of four
    printf("New address in y is %u\n",y);//increment of four
    printf("New address in z is %u\n",z);//increment of one 
    return 0;
}