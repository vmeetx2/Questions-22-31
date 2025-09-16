#include <stdio.h>

int main()

{
    int n; scanf("%d",&n);
    while(n){ putchar('0'+n%10); n/=10; }
}
