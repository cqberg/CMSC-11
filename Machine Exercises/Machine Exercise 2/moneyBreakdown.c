#include <stdio.h>

int main()
{
    double money;
    double money_new;
    int thousand_count;
    int fhundred_count;
    int fifty_count;
    int tens_count;
    int peso_count;
    int cent1_count;
    int cent2_count;
    
    printf("Enter money up to two decimal places: ");
    scanf("%lf", &money);
    
    
    thousand_count = money / 1000;
    money_new = money - (1000 * thousand_count);

    fhundred_count = money_new / 500;
    money_new = money_new - (500 * fhundred_count);
    
    fifty_count = money_new / 50;
    money_new = money_new - (50 * fifty_count);

    tens_count = money_new / 10;
    money_new = money_new - (10 * tens_count);
    
    peso_count = money_new / 1;
    money_new = money_new - (1 * peso_count);
    
    cent1_count = money_new / 0.25;
    money_new = money_new - (0.25 * cent1_count);
    
    cent2_count = money_new / 0.01;
    
    
    printf("\nPeso Breakdown\n");
    printf("Php 1000: %d\n", thousand_count);
    printf("Php 500: %d\n", fhundred_count);
    printf("Php 50: %d\n", fifty_count);
    printf("Php 10: %d\n", tens_count);
    printf("Php 1: %d\n", peso_count);
    printf("Php 0.25: %d\n", cent1_count);
    printf("Php 0.01: %d\n", cent2_count);




    return 0;
}