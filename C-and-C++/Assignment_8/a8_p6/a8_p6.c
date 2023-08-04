//CH 230 - A
//a8_p6
//Irfan Karmali 
//i.karmali*jacobs-university.de

#include <stdio.h>
#include <string.h>

int main () {
    //Declaring variables
    char line[20], line1[20];
    double a, b;

    //Printf for the name of the first file
    printf("Enter name of the first file:");
    scanf("%s", line);
    getchar();
    strcat(line, ".txt");//Concatenation to add '.txt' to the file name

    //Printf for the name of the second file
    printf("Enter name of the second file:"); 
    scanf("%s", line1); 
    getchar();
    strcat(line1, ".txt");//Concatenation to add '.txt' to the file name

    //declaring file pointers
    FILE *fptr1, *fptr2, *fptr3; 
    //opening and reading the second file 
    fptr1 = fopen(line, "r");
    fscanf(fptr1, "%lf", &a);
    fclose(fptr1); 

    //Opening and reading the first file
    fptr2 = fopen(line1, "r"); 
    fscanf(fptr2, "%lf", &b); 
    fclose(fptr2); 

    //creating the third file for the output 
    fptr3 = fopen("results.txt", "w"); 
    fprintf(fptr3, "The sum is = %lf \n", a + b); 
    fprintf(fptr3, "The product is = %lf \n", a * b);
    fprintf(fptr3, "The difference is = %lf \n", a - b);
    fprintf(fptr3, "The division is = %lf \n", a/b);
    fclose(fptr3);

    return 0;
}