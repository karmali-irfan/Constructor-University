#include <stdio.h>

/*
CH-230-A
a4_p8
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Function for the output of the matrix
int print_matrix (int table[30][30], int n) {
    int i, j; //Declaring integers
    //Printf for the matrix 
    printf("The entered matrix is:\n");
    //for loop for printing the matrix
    for (i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return table[i][j]; 
}

//Function to determine integers under secondary diagonal
int under_diagonal (int table[30][30], int n){ 
    int i, j; //Declaring integers
    printf("Under the secondary diagonal:\n");

    //For loop to determing integers
    for (i = 0; i < n ; i++) {
        for( j = 0; j < n; j++){
            //if condition to determine integers
            if ((i +j) >= n){
                printf("%d ", table[i][j]);
            }
        }
    }
    printf("\n");
    return table[i][j]; 
}


int main () {
    //Declaring variables and a table
    int table[30][30], n, i, j; 
    //scanf for the number of rows and columns
    scanf("%d", &n); 
    //for loop for the input of the integers
    for (i = 0 ; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &table[i][j]);
        }
    }

    //Calling functions into the main function for execution
    print_matrix(table, n);
    under_diagonal(table, n);

    return 0; 
}
