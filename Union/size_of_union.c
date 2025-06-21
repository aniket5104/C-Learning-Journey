#include<stdio.h>
union data{
    int roll;//length=4
    char name[20];//length=20
    //length of structure=20 bytes
};
int main(){
    union data d1;
    printf("%d",sizeof(d1));
    return 0;  
}