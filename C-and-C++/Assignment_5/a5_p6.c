#include <stdio.h>

/*
CH-230-A
a5_p6.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/


//void function for counting no. of elements
void count(float *array, int n){
    int count = 0 ;
    int i  = 0; 

    //for loop for counting number of elements
    for (i = 0 ; i < n; i ++){
        if (*array < 0){
            break;
        }
        else {
            count++;
        }
        array++;
    }

    printf("Before the first negative value: %d elements\n", count);

}


//main function
int main() {
    int n, i = 0; 
    //scanf for user input
    scanf("%d", &n);
    float array[n]; 

    //for loop for user input of floats
    for (i = 0; i < n; i++){
        scanf("%f", &array[i]); 
    }

    //function call
    count(array, n);

    return 0;

}