#include <stdio.h>

# Matrix Addtion
void matrixAddition() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n], B[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d", &A[i][j]);
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d", &B[i][j]);
    for(int i=0;i<m;i++, printf("\n"))
        for(int j=0;j<n;j++) printf("%d ", A[i][j]+B[i][j]);
}

# Matrix Multiplication
void matrixMultiplication() {
    int m, p, n;
    scanf("%d %d %d", &m, &p, &n);
    int A[m][p], B[p][n], C[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<p;j++) scanf("%d", &A[i][j]);
    for(int i=0;i<p;i++) for(int j=0;j<n;j++) scanf("%d", &B[i][j]);
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) C[i][j] = 0;
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) for(int k=0;k<p;k++) C[i][j] += A[i][k]*B[k][j];
    for(int i=0;i<m;i++, printf("\n")) for(int j=0;j<n;j++) printf("%d ", C[i][j]);
}

# Matrix transpose
void transposeMatrix() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d", &A[i][j]);
    for(int i=0;i<n;i++, printf("\n")) for(int j=0;j<m;j++) printf("%d ", A[j][i]);
}

# Matrix Determinant
void determinant2x2() {
    int a[2][2];
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d", &a[i][j]);
    printf("Det = %d\n", a[0][0]*a[1][1] - a[0][1]*a[1][0]);
}

void saddlePoint() {
    int m, n, found = 0;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d", &a[i][j]);
    for(int i=0;i<m;i++) {
        int min = a[i][0], col = 0;
        for(int j=1;j<n;j++) if(a[i][j] < min) min = a[i][j], col = j;
        int saddle = 1;
        for(int k=0;k<m;k++) if(a[k][col] > min) saddle = 0;
        if(saddle) printf("Saddle Point at (%d,%d): %d\n", i, col, min), found = 1;
    }
    if(!found) printf("No Saddle Point\n");
}

int main() {
    int ch;
    do {
        printf("\n=== Matrix Menu ===\n1.Add\n2.Multiply\n3.Transpose\n4.2x2 Determinant\n5.Saddle Point\n0.Exit\nChoice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: matrixAddition(); break;
            case 2: matrixMultiplication(); break;
            case 3: transposeMatrix(); break;
            case 4: determinant2x2(); break;
            case 5: saddlePoint(); break;
            case 0: break;
            default: printf("Invalid\n");
        }
    } while(ch != 0);
    return 0;
}
