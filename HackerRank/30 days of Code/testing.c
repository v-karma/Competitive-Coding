#include<stdio.h>

int main(){
    double meal_cost = 12.00;
    int tip_percentage = 20;
    int tax_percentage = 8;

    double tax = (meal_cost*.01) * tip_percentage;
    printf("%f", tax); 
}