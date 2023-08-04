# include <stdio.h>
/* 
CH-230-A 
a3_p2
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

int main () {
    // Declaring character variable
    char ch; 
    printf("Insert a character:");
    //Scanf for character insertion
    scanf("%c", &ch); 
    //Decalring integer variable
    int n; 
    printf("Enter your integer:"); 
    //Scanf for integer insertion
    scanf("%d", &n);
    int i=1;

    //For loop for character output
    for (i=1; n>=1; i++) {
        printf("%c\n",ch-1); 
        n--;
        ch--;
    }

    return 0;

}