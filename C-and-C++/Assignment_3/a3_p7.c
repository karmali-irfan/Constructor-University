#include <stdio.h>
/* 
CH-230-A 
a3_p7
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

void print_form (int n, int m, char c) {
    while (m>0) {
        m--; 
        n++;
    }
    return;
}

int main () {
    int n, m; 
    scanf("%d %d", &n, &m); 
    char c [100];
    getchar();
    scanf("%c", &c); 

    print_form (n, m, c);

    return 0;

}