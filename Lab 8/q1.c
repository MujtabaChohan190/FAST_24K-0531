#include <stdio.h>

int main() {
    int n;
    int count;
    printf("Enter Range in which you want prime numbers: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d, ", i);
        }
    }
    return 0;
}
