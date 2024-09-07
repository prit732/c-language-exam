#include <stdio.h>


int main() {
    long  number; 
    int count = 0;

    printf("Enter any number: ");
    scanf("%ld", &number);

    if (number == 0) {
        count = 1; 
    } else {
       
        if (number < 0) {
            number = -number; // Make the number positive
        }

       
        while (number != 0) {
            number /= 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

  
}
