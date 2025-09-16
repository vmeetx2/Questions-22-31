#include <stdio.h>

int main() {
    long long a, b;
    char op;

    if (scanf("%lld %c %lld", &a, &op, &b) != 3) return 0;

    switch (op) {
        case '+': printf("%lld", a + b); break;
        case '-': printf("%lld", a - b); break;
        case '*': printf("%lld", a * b); break;
        case '/': printf("%lld", b ? a / b : 0); break; 
        case '%': printf("%lld", b ? a % b : 0); break; 
        default: printf("0");
    }

    return 0;
}
