#include<stdio.h>
int main(){
    FILE *fp;
    char name[50];
    fp= fopen("Name.txt","r");
    fgets(name,50,fp);
    printf("Hello %s",name );
    fclose(fp);
    return 0;
}