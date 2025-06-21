#include<stdio.h>
#pragma pack(1)
struct book{
    char name;
    int price;
};
int main()
{
    struct book b1;
    printf("%d",sizeof(b1));
    return 0;
}