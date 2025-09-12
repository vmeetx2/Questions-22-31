#include <stdio.h>

int main() {
    int u; 
    scanf("%d", &u);
    int bill = (u<=100) ? u*5 :
               (u<=200) ? 100*5 + (u-100)*7 :
               (u<=300) ? 100*5 + 100*7 + (u-200)*10 :
                          100*5 + 100*7 + 100*10 + (u-300)*12;
    printf("Bill: ₹%d\n", bill);
    return 0;
}

#ternary to avoid long computation, collapsed into inline computeation
