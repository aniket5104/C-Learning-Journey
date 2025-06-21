#include <stdio.h> //sum of first
int sum(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("the sum is %d", sum(n)); // return value should be kept in printf if th evalue is to be printed
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int snm1 = sum(n - 1); // sum of (n-1) natural no.s
    int sumN = snm1 + n;   // sum of n natural no.s
    return sumN;
}