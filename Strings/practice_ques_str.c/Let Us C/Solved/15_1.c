#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string\n");
    gets(str);
    int strpos,strlng;
    printf("Enter the starting position  and the no. of characters to be extracted");
    scanf("%d %d",&strpos,&strlng);
    for(int i=strpos;i<strpos+strlng;i++){
        printf("%c",str[i]);
    }
    return 0;
}