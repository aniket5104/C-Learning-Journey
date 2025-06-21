#include<stdio.h>
int main() {
    char Character;
    printf("Give a character: ");
    scanf("%c", &Character);
    if(Character >= 'A' && Character <= 'Z'){
        printf("Upper Case");
    }
    else if(Character >= 'a' && Character <= 'z'){
        printf("Lower Case");
    }
    else{
        printf("invalid input");
    }
    return 0;
}