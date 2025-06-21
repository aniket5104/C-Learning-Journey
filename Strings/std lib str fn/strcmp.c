#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Enter the first string\n");
    gets(str1);
    printf("Enter the second string\n");
    gets(str2);
    int val=strcmp(str1,str2);
    printf("%d\n",val);//will give 0 if strings are equal and difference of ascii values of first non-matching characters if strings are not equal
    if(val==0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
}