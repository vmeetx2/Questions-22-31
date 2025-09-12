#include <stdio.h>

int main() {
    int d; 
    scanf("%d", &d);

    if (d <= 0) printf("fine ₹0\n");
    else if (d <= 5) printf("fine ₹%d\n", d * 2);
    else if (d <= 10) printf("fine ₹%d\n", 5*2 + (d-5)*4);
    else if (d <= 30) printf("ffine ₹%d\n", 5*2 + 5*4 + (d-10)*6);
    else printf("Membership Cancelled\n");

    return 0;
}
