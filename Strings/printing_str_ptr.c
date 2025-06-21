#include<stdio.h>
int main(){
    char name[]="RAM";
    char *ptr= name;
    for(int i=0;name[i]!='\0';i++){
        printf("%c",*(name + i));// here the element can be accesed by name[i] *(name+i) (i+name) or i[name]
    }
    return 0;
}