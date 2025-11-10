//common operations like addition, multiplication and transposition on two dimensional arrays
#include <stdio.h>
#include <stdlib.h>

#define MAX 3

void create(int mat[3][3]);
void display(int mat[3][3]);
void add(int mat1[3][3], int mat2[3][3], int res[3][3]);
void mult(int mat1[3][3], int mat2[3][3], int res[3][3]);
void transpose(int mat1[3][3], int res[3][3]);

int main() {
    int mat1[3][3], mat2[3][3], mat3[3][3];
    printf("Enter elements for matrix 1:\n");
    create(mat1);
    display(mat1);
    printf("Enter elements for matrix 2:\n");
    create(mat2);
    display(mat2);
    printf("Addition of two matrices:\n");
    add(mat1, mat2, mat3);
    display(mat3);
    printf("Multiplication of two matrices:\n");
    mult(mat1, mat2, mat3);
    display(mat3);
    printf("Transpose of matrix 1:\n");
    transpose(mat1, mat3);
    display(mat3);

    return 0;
}

void create(int mat[3][3]){
    int i, j;
    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            printf("Enter element :");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
}

void display(int mat[3][3]){
    int i, j;
    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            printf("%d ", mat[i][j]);

        }
        printf("\n");
    }
}

void add(int mat1[3][3], int mat2[3][3], int res[3][3]){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void mult(int mat1[3][3], int mat2[3][3], int res[3][3]){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            res[i][j] = 0;
            for(int k = 0; k < MAX; k++){
                res[i][j] += mat1[i][k] * mat2[k][j];

            }
        }
    }
}
void transpose(int mat1[3][3], int res[3][3]){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            res[i][j] = mat1[j][i];

        }
    }
}