#include<stdio.h>
int main(){
    int m = 12;
    int n = 6;

    int Addition = m + n;
    int Subtraction = m - n;
    int Multiplication = m * n;
    int Division = m / n;
    int Modulo = m % n;

    printf("Addition of 12 and 6 is 18\n");
    printf("Subtraction of 12 and 6 is 6\n");
    printf("Multiplication of 12 and 6 is 72\n");
    printf("Division of 12 and 6 is 2\n");
    printf("Modulo of 12 and 6 is 0\n\n\n\n");


    printf("%d + %d = %d\n", m,n ,Addition);
    printf("%d - %d = %d\n", m,n ,Subtraction);
    printf("%d * %d = %d\n", m,n ,Multiplication);
    printf("%d / %d = %d\n", m,n ,Division);
    printf("%d %% %d = %d\n\n\n\n", m,n ,Modulo);


}