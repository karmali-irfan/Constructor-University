#include <stdio.h>
#include <math.h>
/*
CH-230-A
a4_p3
Irfan Karmali 
i.karmali@jacobs-university.de
*/


//Function for geometric mean
float geometric_mean (float arr[], int num) {
    //initializing variables
    float product = 1, mean; 
    int i;

    //if condition if all 15 floats were entered
    if (num == 15){
        for (i = 0; i < num ; i++ ){
            product = product * arr[i];
        }
        mean = pow(product, (float)(1/(float)num));
    }

    //Else condition if less than 15 floats were entered
    else {
        for (i = 0; i < (num) ; i ++){
            product = product * arr[i]; 
        }
         mean = pow(product, (1/(float)num));
    }

    printf("The gemoetric mean is: %f\n", mean);

    return mean; 
}

//Function for finding the lowest values
float lowest_value (float arr[], int num){
    //Initializing variables
    float low; 
    int i;
    low = arr[0];

    //For loop for finding the lowest values
    for (i = 1; i < num; i++){
        if (arr[i] < low) {
            low = arr[i];
        }
    }

    printf("The lowest number is: %f\n", low);
    return low;
}


//Function for finding the highest value 
float highest_value (float arr[], int num){
    //Initializing variables
    int i; 
    float high; 
    high = arr[0];

    //for loop for finding the highest values
    for (i = 0; i < num ; i++){
        if (arr[i] > high){
            high = arr[i];
        }
    }

    printf("The highest value is: %f \n", high);

    return high; 
}

//Function for calcualting the sum
float sum (float arr[], int num){
    float sum = 0;
    int i = 0;

    for (i = 0; i < num; i++){
        sum = sum + arr[i];
    }

    printf("The sum is: %f \n", sum);

    return sum;
}


int main () {
    //declaration of string and variables
    float array [15]; 
    int n = 0;  
    char c; 
    

        //For loop for  continuos insertion of float arrays
    for(n=0; n<15; n++){
       scanf("%f", &array[n]); 
        //if condition to break loop if the float inserted is negative
       if (array[n] < 0){
         break; /*to stop the loop since a negative integer was inserted*/
    }
    }
    
    //Printf and scanf for entering the character
    printf("Enter your character:");
    getchar();
    scanf("%c", &c); 

    //Switch functions for the cases 
    //depending on the charachter entered
    switch (c) {
        case 'm':
            //Calling the geometric mean function
            geometric_mean(array, n); 
            break;
        
        case 'l':
            //calling the lowest value function
            lowest_value(array, n); 
            break; 
        
        case 'h':
            //calling the highest value function
            highest_value(array, n);
            break;
        
        case 's':
            //calling the sum function
            sum(array, n); 
            break; 

        default:
            break;
    }
  
    return 0; 
}