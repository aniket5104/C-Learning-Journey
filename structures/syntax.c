#include<stdio.h>
int main(){
    struct book{
        char name;
        float price;
        int pages;
    }b1,b2,b3;
    printf("Enter the name, price and no, of pages in book1\n");
    scanf(" %c %f %d",&b1.name,&b1.price,&b1.pages);
    printf("Enter the name, price and no, of pages in book2\n");
    scanf(" %c %f %d",&b2.name,&b2.price,&b2.pages);
    printf("Enter the name, price and no, of pages in book3\n");
    scanf(" %c %f %d",&b3.name,&b3.price,&b3.pages);
    printf("\n The name, price and no. of pages in b1, b2 and b3 is: ");
    printf("%c %f %d\n",b1.name,b1.price,b1.pages);
    printf("%c %f %d\n",b2.name,b2.price,b2.pages);
    printf("%c %f %d\n",b3.name,b3.price,b3.pages);
    return 0;
}