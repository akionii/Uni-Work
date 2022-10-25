/*
 ============================================================================
 Name        : pow.c
 Author      : Leonardo Acchioni Mena
 Version     : 1.0
 Copyright   : N.A
 Description : Power Calculator, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);
    printf("\n");

    return 0;
}