/*
 ============================================================================
 Name        : 2DegEq.c
 Author      : Leonardo Acchioni Mena
 Version     : 1.0
 Copyright   : N/A
 Description : Second Degree Equation in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<math.h>
 
int main() {
   float a, b, c;
   float desc, root1, root2;
 
   printf("\nEnter the Values of a : ");
   scanf("%f", &a);
   printf("\nEnter the Values of b : ");
   scanf("%f", &b);
   printf("\nEnter the Values of c : ");
   scanf("%f", &c);
 
   desc = sqrt(b * b - 4 * a * c);
 
   root1 = (-b + desc) / (2.0 * a);
   root2 = (-b - desc) / (2.0 * a);
 
   printf("\nFirst Root : %f", root1);
   printf("\nSecond Root : %f", root2);
   printf("\n");
 
   return (0);
}