//CH 230 - A
//a8_p7
//Irfan Karmali 
//i.karmali*jacobs-university.de

#include <stdio.h>

int main () {
    //Declaring variables and file pointers
    char ch; 
    FILE *fptr1, *fptr2, *fptr3; 
    //Opening files
    fptr1 = fopen("text1.txt", "r");
    fptr2 = fopen("text2.txt", "r");
    fptr3 = fopen("merge12.txt", "w"); 

    //While loop for coping the content of file 1 onto the merge file
    while (1){
        ch = getc(fptr1);
        if (ch == EOF){
            break;
        }
        fprintf(fptr3, "%c", ch);
    }

    //While loop for coping the content of file 2 onto the merge file
    while (1){
        ch = getc(fptr2);
        if (ch == EOF){
            break;
        }
        fprintf(fptr3, "%c", ch);
    }

    //closing the files
    fclose(fptr1); 
    fclose(fptr2); 
    fclose(fptr3); 

    return 0; 
}