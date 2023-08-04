/*
CH 230-A
a6_p3.c
Irfan Karmali
i.karmali@jacobs-university.de 
*/

#include <stdio.h>

//Macro for minimum value
#define min_value(arr, min, i){\
    i = 0 ;\
    min = arr[0];\
    for(i = 0; i < 3 ; i++){\
        if(arr[i] < min)\
            min = arr[i];\
    }\
}\

//Macro for max value
#define max_value(arr, max, i){\
    i = 0 ;\
    max = arr[0];\
    for(i = 0; i < 3 ; i++){\
        if(arr[i] > min)\
            max = arr[i];\
    }\
}\

//Macro for result 
#define mid_range(max, min, result){\
    result = ((double)(max + min) / 2) ;\
}\


//Main function
int main () {
    //Declaring variables
    int arr[3], min, max, i;
    double result; 
    
    for(i = 0; i < 3; i++){
        scanf("%d", &arr[i]); 
    }

    //Calling macros
    min_value(arr, min, i);
    max_value(arr, max, i);
    mid_range(max, min, result);

    //Printing result
    printf("The mid-range is: %0.6f\n", result);


    return 0; 


}