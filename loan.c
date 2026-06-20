#include <stdio.h>

int main() {
    int age;
    double income;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income (in KES): ");
    scanf("%lf", &income);

    if (age >= 21 && income >= 21000)
        printf("Congratulations you qualify for a loan.\n");
    else
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");

    return 0;
}//
// Created by Administrator on 20/06/2026.
//
