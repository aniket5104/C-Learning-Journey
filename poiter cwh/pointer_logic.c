#include<stdio.h>
int main(){
    int a=23;
    int *ptr_a=&a;//syntax to declare pointer variable
    /* line 4 is declaration of a pointer which is read as the VALUE AT ADDRESS(*) stored in ptr_a is an int */
    printf("the value of a is %d",a);
    printf("\nThe value of a is %d",*ptr_a);
    /*line 5 and 6 will give the same output as  *ptr_a gives the 
    value at address storedinside ptr_a and ptr_a stores the 
    address of variable a */
    printf("\nThe address of pointer to a is %p\n",&ptr_a);
    /*This line shows that the pointers itself also has an address 
    at which it stores the adress of a variable*/
    printf("The address of a is %p",&a);
    printf("\nThe address of a is %p",ptr_a);
    /*Line 14 and 15 show that & stores the address of a variable
    which is same(because they will give same output) as the value
    stored in ptr_a which is a pinter to a*/
    printf("\nThe value of a is %d",*(&a));//value of a can printed like this too
    return 0;
}