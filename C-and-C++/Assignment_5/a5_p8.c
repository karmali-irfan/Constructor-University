#include <stdio.h>
#include <stdlib.h>

/* 
CH - 230A
a5_p8.c
Irfan Karmali 
i.karmali@jacobs-university.de
*/



void print_matrix (int **matrix, int row, int col){
    int k, l;

    for(k = 0; k < row; k++){
        for(l = 0; l < col; l++){
            printf("%d ", matrix[k][l]); 
        }
        printf("\n");
    }

}

void multiply(int **matrix1, int **matrix2, int **result, int m, int p){
    int i,j,k; 

    for (i = 0; i < m ; i++){
        for (j = 0; j < p ; j++){
            result[i][j] = 0;
           for(k = 0; k < p ; k++){
               result[i][j] +=  matrix1[i][k] * matrix2[k][j]; 
           }
        }
    }

}


void scan_matrix (int **matrix, int row, int col){
    int i, j;

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &matrix[i][j]); 
        }
    }

}

int main () {

    int **matrix1, **matrix2, **result, n, m, p, i;

    printf("Enter value for n:");
    scanf("%d", &n); 
    printf("Enter value for m:");
    scanf("%d", &m); 
    printf("Enter value for p:");
    scanf("%d", &p); 


    matrix1 = (int**) malloc(sizeof(int*) * n);
    matrix2 = (int**) malloc(sizeof(int*) * m); 

    for (i = 0; i < n; i++){
        matrix1[i] = (int*) malloc(sizeof(int) * m);
    }

    for (i = 0; i < m; i++){
        matrix2[i] = (int*) malloc(sizeof(int) * p);
    }


    scan_matrix(matrix1, n, m);
    scan_matrix(matrix2, m, p);
    printf("Matrix A:\n");
    print_matrix(matrix1, n, m);
    printf("Matrix B:\n");
    print_matrix(matrix2, m, p);


    result = (int**) malloc(sizeof(int*) * m);
    for(i = 0; i < m; i++){
        result[i] = (int*) malloc(sizeof(int) * p); 
    }



   printf("The multiplication of Matrix A and B:\n"); 
   multiply(matrix1, matrix2, result, m, p);
   print_matrix(result, m, p);
    
    


    for (i = 0; i < n ; i++){
        free(matrix1[i]);
    }
    free(matrix1);


    for (i = 0; i < m ; i++){
        free(matrix2[i]); 
    }
    free(matrix2); 

    for(i = 0; i < m ; i++){
        free(result[i]);
    }
    free(result);

    return 0; 
}