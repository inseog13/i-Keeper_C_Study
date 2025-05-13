#include <stdio.h>

int main() {
    int i, j, co;
    scanf("%d", &co);

    for (i = 0; i < co; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
