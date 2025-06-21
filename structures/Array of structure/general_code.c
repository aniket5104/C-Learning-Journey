#include<stdio.h>
int main(){
    struct book{
        char name;
        int page;
        float price;
    };
    struct book b[3];
    for(int i=0;i<3; i++){//for declaring values in structures
        printf("Enter the name no. of pages and price of book%d",i+1);
        scanf(" %c %d %f",&b[i].name,&b[i].page,&b[i].price);
    }
    for (int i=0;i<3;i++){
        printf("The name, no. of pages and price of book%d is: %c %d %f\n",i+1,b[i].name,b[i].page,b[i].price);
    }
    return 0;
}