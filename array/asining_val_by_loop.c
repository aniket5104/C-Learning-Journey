#include <stdio.h>
int main()
{
    int marks[4];
    int i;
    for (i = 0; i <= 3; i++)
    {
        printf("Enter the marks");
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j <= 3; j++)
    {
        printf("%d\n", marks[j]);
    }
    return 0;
}