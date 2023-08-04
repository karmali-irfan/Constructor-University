#include <stdio.h>

/*
CH-230-A
a4_p7
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Function for the output of the matrix
int print_max (int table[30][30], int row){
    int i, j; //Declaring integers
    //Printf for the matrix 
    printf("The entered matrix is:\n");
    //for loop for printing the matrix
    for (i = 0; i < row; i++) {
        for( j=0; j < row; j++){
           printf("%d ", table[i][j]);
        }
        printf("\n");
    } 

    return table[i][j];
}

//Function to determine integers under the diagonal
int diagonal (int table[30][30], int row) {
    int i, j; //Declaring integers
    printf("Under the main diagonal:\n");
    //For loop to determing integers
    for(i = 0; i < row; i ++){
        for(j = 0; j < row; j ++){
            //if condition to determine integers
            if (i>j){
                printf("%d ", table[i][j]);
            }
        }
    }
    printf("\n");
    return table[i][j]; 
}

int main () {
    //Declaring variables and a table
     int table[30][30];
     //row means both, no. of rows and columns
     int i, j, row; 
    //scanf for the number of rows and columns
    scanf("%d", &row);
    //for loop for the input of the integers
    for (i = 0; i < row; i++) {
        for( j=0; j < row; j++){
            scanf("%d", &table[i][j]);
        }
    } 

    //Calling functions into the main function for execution

    print_max(table, row);
    diagonal(table, row);
    
    return 0; 

}
   

