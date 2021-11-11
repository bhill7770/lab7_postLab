#include <stdio.h>
int main() {
    int x1, x2, x3;
    printf("Enter phone number [(999)999-9999]: ");
    scanf("(%d)%d-%d", &x1, &x2, &x3);
    printf("You entered %d-%d-%d\n", x1, x2, x3);
    return 0;
}

