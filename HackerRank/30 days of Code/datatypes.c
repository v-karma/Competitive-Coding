#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int num1;
    double num2;
    char new[100];
    
    scanf("%d",&num1);
    scanf("%lf",&num2);
    scanf(" %[^\n]", new);
    
    printf("%d\n", i+num1);
    printf("%.1f\n", d+num2);
    printf("%s%s",s,new);
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}