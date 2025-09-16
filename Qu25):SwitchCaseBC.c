#include <iostream>

using namespace std;

int main()
{
    long long a, b; char op;
    if (!(cin >> a >> op >> b)) return 0;

    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << (b ? a / b : 0); break; #accounted for switch case of b =0 or not 
        case '%': cout << (b ? a % b : 0); break; # same here, kept else output 0 
        default: cout << 0;
      
    }
}
