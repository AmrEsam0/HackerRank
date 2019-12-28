#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, diff, d1 = 0, d2 = 0;
    int** matrix;

    scanf("%d", &n);
    matrix = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        matrix[i] = malloc(n * sizeof(int));
    }

    
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        d1 += matrix[i][i];
        d2 += matrix[i][n-1-i];
    }

    printf("%d", abs(d1-d2));
    free(matrix);
    
    return 0;
}