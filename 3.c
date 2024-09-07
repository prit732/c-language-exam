#include <stdio.h>

int main() {
    
   
    float base,hra, da, ta ,grossSalary;

    //  salary and percentages HRA, DA, and TA
    printf("Enter Base Salary: ");
    scanf("%f", &base);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra);

    printf("Enter DA percentage: ");
    scanf("%f", &da);

    printf("Enter TA percentage: ");
    scanf("%f", &ta);

    // HRA, DA, and TA
    hra = (hra / 100) * base;
    da = (da / 100) * base;
    ta = (ta / 100) * base;

    //  Gross Salary
    grossSalary = base + hra + da + ta;

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    
}