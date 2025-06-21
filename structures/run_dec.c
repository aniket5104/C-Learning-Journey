#include<stdio.h>
int main(){
    struct book
    {
        char name;
        float price;
        int page;
    };
    struct book b1={'A', 455.6, 688};
    struct book b2={'B'};// Partial Initialisation
}