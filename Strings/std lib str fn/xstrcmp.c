#include<stdio.h>
#include<string.h>
int xstrcmp(char *a, char *b);
int main(){
    char str1[100]="Radha";
    char str2[100]="Krishna";
    int val=xstrcmp(str1,str2);
    printf("%d\n",val);
    if(val==0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");    
    }
}
int xstrcmp(char *a, char *b){
    while(*a=*b){
        if(*a=='\0'){
            return 0;
        }
        a++;
        b++;
    }
    return *a-*b;
}