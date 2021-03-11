#include <iostream>

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = (a + b) % 10;
        a = b % 10;
        b = c % 10;
    }
    return b % 10;
}

// Driver code
int main()
{
    int n;
    std::cin >> n;

    std::cout << fib(n);
    return 0;
}