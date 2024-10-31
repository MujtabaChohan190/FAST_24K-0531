#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to start the pattern: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i -= 2) {
        for (int j = i; j > 0; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
