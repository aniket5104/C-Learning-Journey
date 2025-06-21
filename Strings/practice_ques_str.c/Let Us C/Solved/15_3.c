#include<stdio.h>//printing fibonacci of strings
#include<string.h>
void fib(char *a, char *b);
int main(){
    char a[100]="A", b[100]="B";
    fib(a,b);
    return 0;
}
void fib(char *f0, char *f1){
    printf("%s\n",f0);
    printf("%s\n",f1);
    char temp[100];
    for(int i=2;i<=5;i++){
        strcpy(temp,f1);
        strcat(f1,f0);
        strcpy(f0,temp);
        printf("%s\n",f1);
    }
}