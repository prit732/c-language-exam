#include <stdio.h>

int main(){
    int start, end;

    printf("Enter the first number:");
    scanf("%d", &start);


    printf("Enter the second number:");
    scanf("%d", &end);


    int current = start;

    while (current <= end) {
        printf("%d", current);
        if (current + 4 <= end) {
            printf(", ");
        }
        current += 4;
    }


    printf("\n");


}
