#include <stdio.h>

int main() {
    int matrix[3][3];
    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int saddlePointFound = 0;
    for (int i = 0; i < 3; i++) {
        int rowMin = matrix[i][0], colIdx = 0;
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
                colIdx = j;
            }
        }
        int isSaddlePoint = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix[k][colIdx] > rowMin) {
                isSaddlePoint = 0;
                break;
            }
        }
        if (isSaddlePoint) {
            printf("Saddle Point found at (%d, %d): %d\n", i, colIdx, rowMin);
            saddlePointFound = 1;
        }
    }

    if (!saddlePointFound) {
        printf("No Saddle Point found.\n");
    }
    return 0;
}
