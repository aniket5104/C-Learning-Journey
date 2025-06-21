#include<stdio.h>
#include<string.h>
char xstrcpy(char *a, const char *b);
int main(){
    char str[100]="Jai Shree Ram";
    char arr[100];
    xstrcpy(arr,str);
    printf("The copied string is %s",arr);   
    return 0;
}
char xstrcpy(char *a,const char *b){
    while(*b!='\0'){
        *a=*b;
        a++;   
        b++;
    }
    *a='\0';    
    return *a;
}