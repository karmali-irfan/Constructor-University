#include <stdio.h>
#include <stdlib.h>


/*
CH-230-A
a5_p5.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/

void scalar_product(double vector1[], double vector2[], double *product, int n){
    int i = 0;
    double total;
    *product = 0; 

    for ( i = 0; i < n ; i++){
        total = vector1[i] * vector2[i];  
        *product = *product + total; 
    }
}

void smallest(double *vector, int n, double *min){
    int i = 0;
    *min = *vector;

    for (i = 1; i < n; i++){
        if (*min > *vector){
            *min = *vector;
        }
        vector++;
    }
   
}

void largest(double vector[], int n, double *max){
    int i;
    *max = vector[0]; 

    for(i = 1; i < n; i ++){
        if( vector[i] > *max){
            *max = vector[i]; 
        }
    }
}

void position(double *vector, int n, double value, int *pos){
    int i = 0;

    for (i = 0; i < n; i++){
        if(*vector == value){
            *pos = i;
            break;
        }
        vector++;
    }
}



int main () {
    int n, i, j, pos;
    double *vector1, *vector2, product, min, max; 
    scanf("%d", &n); 

    vector1 = (double*) malloc(sizeof(double) *n); 
    vector2 = (double*) malloc(sizeof(double) *n); 
    
    for(i = 0; i < n; i++){
        scanf("%lf", &vector1[i]); 
    }

    for(j = 0; j < n; j++){
        scanf("%lf", &vector2[j]); 
    }

    scalar_product(vector1, vector2, &product, n); 
    printf("Scalar product=%lf\n", product);


    smallest(vector1, n, &min); 
    printf("The smallest = %f\n", min); 
    position(vector1, n, min, &pos);
    printf("Position of smallest = %d\n", pos); 
    largest(vector1, n, &max); 
    printf("The largest = %f\n", max); 
    position(vector1, n, max, &pos);
    printf("Position of largest = %d\n", pos); 

    smallest(vector2, n, &min); 
    printf("The smallest = %f\n", min); 
    position(vector2, n, min, &pos);
    printf("Position of smallest = %d\n", pos); 
    largest(vector2, n, &max); 
    printf("The largest = %f\n", max); 
    position(vector2, n, max, &pos);
    printf("Position of largest = %d\n", pos); 

    




    free(vector1);
    free(vector2);



    return 0; 
}