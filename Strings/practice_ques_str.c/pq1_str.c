#include<stdio.h>//reverse a string
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string\n");
    gets(str);
    int strlng=0;
    int k=0;
    while(str[k]!='\0'){
        strlng++;
        k++;
    }
    for(int i=0,j=strlng-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reversed string is %s",str);
    return 0;
}