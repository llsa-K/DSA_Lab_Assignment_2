#include <stdio.h>

#traversing an array
void traverse3DArray() {
    int arr[2][3][4] = {
        {{1,2,3,4},{5,6,7,8},{9,10,11,12}},
        {{13,14,15,16},{17,18,19,20},{21,22,23,24}}
    };

    for(int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i);
        for(int j = 0; j < 3; j++, printf("\n"))
            for(int k = 0; k < 4; k++)
                printf("%d ", arr[i][j][k]);
        printf("\n");
    }
}

# searching an array
void search3DArray() {
    int arr[3][3][3], x, found = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            for(int k=0; k<3; k++)
                scanf("%d", &arr[i][j][k]);

    scanf("%d", &x);

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            for(int k=0; k<3; k++)
                if(arr[i][j][k] == x)
                    printf("Found at Layer %d, Row %d, Column %d\n", i, j, k), found = 1;

    if(!found) printf("Element not found\n");
}

# Sum of an array
void sum3DArray() {
    int arr[2][2][2], sum = 0;
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            for(int k=0; k<2; k++)
                scanf("%d", &arr[i][j][k]), sum += arr[i][j][k];
    printf("Sum: %d\n", sum);
}

int main() {
    int c;
    do {
        printf("\n=== 3D Array Operations ===\n1. Traverse (2x3x4)\n2. Search (3x3x3)\n3. Sum (2x2x2)\n0. Exit\nChoice: ");
        scanf("%d", &c);
        switch(c) {
            case 1: traverse3DArray(); break;
            case 2: search3DArray(); break;
            case 3: sum3DArray(); break;
            case 0: break;
            default: printf("Invalid choice\n");
        }
    } while(c != 0);
    return 0;
}
