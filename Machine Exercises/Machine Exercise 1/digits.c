

#include <stdio.h>

int main()
{
    int number;
    int tenthou;
    int thou;
    int hund;
    int tens;
    int ones;
    int sum;
    
    
    printf("Enter a positive five-digit number: ");
    scanf("%d", &number);
    
    tenthou = number % 100000 / 10000;
    
    thou = number % 10000 / 1000;
    
    hund = number % 1000 / 100;
    
    tens = number % 100 / 10;
    
    ones = number % 10 / 1;
    
    
    sum = tenthou + thou + hund + tens + ones;
    
    printf("\n%d + %d + %d + %d + %d = %d", tenthou, thou, hund, tens, ones, sum);
    

    return 0;
}