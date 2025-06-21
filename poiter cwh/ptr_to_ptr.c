#include<stdio.h>
int main(){
    int i=3, *j,**k;// k is a pointer to pointer
    j=&i;
    k=&j;//a pointer to pointer stores the address of a pointer 
    printf("\nAddress of i =%u",&i);//&i reads address of i
    printf("\nAddress of i =%u",j);//j is a pointer which i storing address of i
    printf("\nAddress of i =%u",*k);
    /* *k reads as value at adress in k; value in k is address of j
    and at address of j is address of i
    and value at address in j is i*/
    printf("\nAddress of j =%u",&j);
    printf("\nAddress of j =%u",k);//k stores address of j
    printf("\nAddress of k =%u",&k);
    printf("\nValue of j= %u",j);
    printf("\nValue of k= %u",k);
    printf("\nValue of i= %d",i);
    printf("\nValue of i= %d",*(&i));
    printf("\nValue of i= %d",*j);//*j reads as value at adsress in j
    printf("\nValue of i= %d",**k);
    /* **k reads as value at value at address in k; address in k is address of j and 
    value at address in j is address of i and at value at address of i is i */
    return 0; 
}