//CH 230 - A
//a8_p8
//Irfan Karmali 
//i.karmali*jacobs-university.de


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    //Declaring variables
    char ch, fname[50]; 
    int count = 0;
    printf("Enter name of file:"); 
    scanf("%s", fname);
    getchar();
    //Adding the file extension to the file name
    strcat(fname, ".txt");

    //Declaring a File pointer
    FILE *fptr; 
    //Opening the file
    fptr = fopen(fname, "r");
    //While loop for counting the number of words in a file
    while (1){
        ch = getc(fptr);
        if(ch == EOF){
            break;
        }

        if ( (ch >= 'a' && ch <= 'z') || (ch>='A' && ch <='Z') ){
            ch = getc(fptr); 
            if(ch==' '||ch==','||ch=='?'||ch=='!'||ch=='.'
                ||ch=='\t'||ch=='\r'||ch =='\n')
            {
                count++;
            }
            fseek(fptr, -1, SEEK_CUR); 
        }
    }
    fclose(fptr); //Closing the file

    printf("The file contains %d words\n", count);

    return 0; 
}
