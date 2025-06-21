#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char N;
    printf("Enter the nationality: ");
    scanf("%c",&N);
    if(N=='i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("NAMASTE");
}
void bonjour(){
    printf("BONJOUR");
}
