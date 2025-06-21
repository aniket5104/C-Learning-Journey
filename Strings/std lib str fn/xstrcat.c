#include<stdio.h>
#include<string.h>
char xstrcat(char *a, char *b);
int main(){
    char str1[100]= "Jai Shree ";
    char str2[100]="Ram";
    xstrcat(str1,str2);
    printf("%s",str1);
    return 0;
}
char xstrcat(char *a, char *b){
    while(*a!='\0'){
        a++;
    }
    while(*b!='\0'){
        *a = *b;
        a++;
        b++;
    }
    *a='\0';
    return *a;
}