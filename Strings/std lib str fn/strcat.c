#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Krishna";
    char str[100] = "Jai Shree ";
    
    strcat(str, str1); // Concatenates str1 to str
    printf("%s\n", str);
    
    return 0;
}