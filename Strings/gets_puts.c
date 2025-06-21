#include<stdio.h>
#include<string.h>
int main(){
    char name[25];//size declaration is mandatory if initialisation is not done
    printf("Enter the name");
    gets(name);//gets() is used to take input of multi word strings
    puts("Hello!");// puts() always sends the  cursor to a new line
    puts(name);
    return 0;
}