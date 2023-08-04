//CH 230 - A
//a8_p5
//Irfan Karmali 
//i.karmali@jacobs-university.de

#include <stdio.h>

int main () {
    //Declaring File pointers
    FILE *fptr, *fptr1; 
    //Opening the file
    fptr = fopen("chars.txt", "r"); 
    //Getting chars from the file
    char a = getc(fptr);
    char b = getc(fptr);
    fclose(fptr); //closing the file

    //Opening and creaating a new file
    fptr1 = fopen("codesum.txt", "w");
    //printing on the new file 
    fprintf(fptr1, "%d", a+b);
    fclose(fptr1); //closing the file

    return 0; 
}