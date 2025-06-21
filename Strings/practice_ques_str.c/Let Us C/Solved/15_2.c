#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string containning a no.\n");
    gets(str);
    int num=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            num = num*10 + (str[i] - '0');
        }
        else{
            printf("Invalid input");
            return 0;
        }
    }
    printf("The no. is %d",num);
    return 0;
}