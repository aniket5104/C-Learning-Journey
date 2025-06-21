#include <stdio.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d", &n);
    int i = 1;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first %d natural no.s is %d\n", n, sum);
    for (int j = n; j >= 1; j--)
    {
        printf("\n%d", j);
    }
    return 0;
}