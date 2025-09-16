#include <stdio.h>

int main() 
{
    int n;
    long long prod = 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
        prod *= i;

    printf("%lld", prod);
    return 0;
}
