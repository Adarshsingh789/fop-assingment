#include <stdio.h>


void addMatrix(int a[10][10], int b[10][10], int r, int c) {
    int i, j, sum[10][10];

    printf("\nMatrix Addition Result:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int a[10][10], int r, int c) {
    int i, j, k, min, col;

    for(i = 0; i < r; i++) {
        min = a[i][0];
        col = 0;

        
        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        for(k = 0; k < r; k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle Point: %d\n", min);
            return;
        }
    }

    printf("\nNo Saddle Point found\n");
}

void inverseMatrix(int a[2][2]) {
    int det;

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("\nInverse does not exist (determinant = 0)\n");
        return;
    }

    printf("\nInverse Matrix:\n");
    printf("%.2f %.2f\n", (float)a[1][1]/det, (float)-a[0][1]/det);
    printf("%.2f %.2f\n", (float)-a[1][0]/det, (float)a[0][0]/det);
}

void magicSquare(int a[10][10], int n) {
    int i, j, sum = 0, temp;


    for(j = 0; j < n; j++)
        sum += a[0][j];


    for(i = 1; i < n; i++) {
        temp = 0;
        for(j = 0; j < n; j++)
            temp += a[i][j];

        if(temp != sum) {
            printf("\nNot a Magic Square\n");
            return;
        }
    }

    for(j = 0; j < n; j++) {
        temp = 0;
        for(i = 0; i < n; i++)
            temp += a[i][j];

        if(temp != sum) {
            printf("\nNot a Magic Square\n");
            return;
        }
    }

    printf("\nIt is a Magic Square\n");
}

int main() {
    int a[10][10], b[10][10], r, c, i, j;
    int mat2[2][2];
    int n;

    // Matrix addition
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    addMatrix(a, b, r, c);

    saddlePoint(a, r, c);

    printf("\nEnter 2x2 matrix for inverse:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &mat2[i][j]);

    inverseMatrix(mat2);

    printf("\nEnter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    magicSquare(a, n);

    return 0;
}
