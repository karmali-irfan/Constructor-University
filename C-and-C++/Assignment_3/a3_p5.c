#include <stdio.h>
/* 
CH-230-A 
a3_p5
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

int main () { 
   char c;
   int n, i;
   printf("Enter Character:");
   //Scanf for character insertion
   scanf("%c", &c);
   printf("Enter integer:"); 
   //Scanf for the integer insertion
   scanf("%d", &n);

   double temp [100], sum = 0, far; 

    // For loop for the temperature values insertion for the array
   for (i = 0; n > 0; i++) {
       scanf("%lf", &temp[i]);
       n--;
   }

    //Switch for the conditions for the output
         switch (c)
   {
       //Case s for the sum of the temperatures
        case 's':
           while (i>=0) {
               sum = sum + temp[i];
               i--;
           }
           printf("Sum of temperatures = %lf\n", sum);


        //Case t for the sum of the temperatures
        case 't':
            printf("List of temperatures in farenheit:\n");
            for (n=0; n<i; n++) {
                far = (1.8 * (temp[n])) + 32; 
                printf("%f\n", far); 
            }


        //Case p for the sum of the temperatures
        case 'p': 
            printf("List of all temperatures\n"); 
            for (n = 0; n < i; n++){
                printf("%f\n", temp[n]); 
            }

        //Case for all remaining possibilities
        default: 
            for (n = 0; n < i ; n++) {
                sum = sum + temp[n]; 
            }
            printf("Average of tempereatures = %f\n", (sum/i));
    }

   return 0;
}