
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
