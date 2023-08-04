//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a8_p9

#include <stdio.h>


int main () {
    int n; 
    printf("Enter number of files:");
    scanf("%d", &n); 
    char fname[20], ch;
    FILE *fptr, *fptr1; 
    fptr1 = fopen("results.txt", "wb"); 

    for (int i = 0; i < n ; i++){
        printf("Enter name of file:");
        scanf("%s", fname); 
        getchar();
        fptr = fopen(fname, "rb"); 
        while (1){
            ch = getc(fptr);
            if (ch != EOF){
                fprintf(stdout, "%c", ch); 
                fwrite(&ch, sizeof(char), 1, fptr1); 
            }
            else {
                break;
            }
        }
        fprintf(fptr1, "\n");
        fprintf(stdout, "\n");
        fclose(fptr);
    }
    fclose(fptr1);

    return 0; 
}