#include <stdio.h>

int main() {

    //0, 1, 1, 2, 3, 5, 8, 13
    int start, first = 0, second = 1, third, end;


    printf("Enter the number:");
    scanf("%d", &start);

    printf("Enter the number:");
    
    for(end = 0; end < start; end++) {
        if (end == 0) {
        third = first;
        } 
        
        else if (end == 1) {
        third = second;
        } 
        else {
            third = first + second;
            first = second;
            second = third;
        }
        printf("%d ", third);
    }

}