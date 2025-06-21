#include <stdio.h> //factorial of n
int factorial(int n);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("The factorial is %d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int fnm1 = factorial(n - 1);
    int fN = fnm1 * n;
    return fN;
}
