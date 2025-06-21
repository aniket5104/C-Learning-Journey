#include<stdio.h>
#include<conio.h>

int main()
{   char a[10];
    printf("enter your nat.  ");
    gets(a);
    
    if(strcmp(a,"Indian")==0||strcmp(a,"indian")==0)
        printf("namaste");
    
    else if(strcmp(a,"french")==0||strcmp(a,"French")==0)
        printf("bonjour");
    else 
    printf("invaldi input");
    return 0;
}