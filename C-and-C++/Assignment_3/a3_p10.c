#include <stdio.h>
/* 
CH-230-A 
a3_p10
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

//Prototypes of Functions
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main () { 
    //Declaring float variables
    float c, d; 
    float prod; 
    //Scanf for user input of float variables
    scanf("%f", &c);
    scanf("%f", &d);

    //Function calls 
    product(c, d);
    productbyref(c, d, &prod);
    modifybyref(&c, &d);

    return 0; 

}

//Function for the product
float product(float a, float b){
    float product = a * b; 
    printf("Prodcut = %f\n", product);
    return product; 
}

//Function for product by reference
void productbyref(float a, float b, float *p){ 
    *p = a * b; 
    printf("Product by ref = %f\n", *p); 
}

//Function for modification of variables
void modifybyref(float *a, float *b) {
    *a = *a + 3; 
    *b = *b + 11; 
    printf("The new a is %f and the new b is %f\n", *a, *b);
    printf("The product of the new a and b is %f\n", (*a * *b));

}
