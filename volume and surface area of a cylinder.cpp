//
// Created by Administrator on 18/06/2026.
//
#include <stdio.h>
#define PI 3.14159

int main() {
    double radius, height, volume, surface_area;

    printf("Enter the radius of the cylinder (in meters): ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder (in meters): ");
    scanf("%lf", &height);

    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);

    printf("\nVolume = %.2f cubic meters\n", volume);
    printf("Surface Area = %.2f square meters\n", surface_area);

    return 0;
}