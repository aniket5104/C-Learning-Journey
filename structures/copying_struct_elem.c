#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        int price;
        char name[100];
    };
    struct book b1={450,"Ani"};
    struct book b2,b3;
    strcpy(b2.name,b1.name);//not b2.name=b1.name; or strcpy(b1.name=b2.name); and strcpy is used only in case of char or str
    b2.price=b1.price;//equality operator used in case of int orfloat
    //for copying all elements
    b3=b1;
    printf("%s %d\n",b2.name,b2.price);
    printf("%s %d\n",b3.name,b3.price);
    printf("%s %d\n",b1.name,b1.price);
    return 0;
}