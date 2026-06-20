#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, simple, compound;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time (in years): ");
    scanf("%lf", &time);

    simple = (principal * rate * time) / 100;
    compound = principal * pow((1 + rate/100), time) - principal;

    printf("Simple Interest = %.2f\n", simple);
    printf("Compound Interest = %.2f\n", compound);

    return 0;
}//
// Created by Administrator on 20/06/2026.
//
