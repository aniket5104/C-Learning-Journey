#include <stdio.h> //fibonacii series: 1,1,2,3,5,8,13,21
int fib(int n);
int main()
{
    int n;
    printf("Enter n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", fib(i));
        sleep(1);
    }
    return 0;
}
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fib(n - 1) + fib(n - 2);
    return fibN;
}