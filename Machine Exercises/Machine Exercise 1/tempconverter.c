//Clarence Q. Berganio


#include <stdio.h>

int main()
{
    double fah_temp;
    double celcius;
    double kelvin;
    
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fah_temp);
    
    
    celcius = (5 * (fah_temp - 32)) / 9;
    printf("\nCelcius: %.1lf\n", celcius );
    
    
    kelvin = celcius + 273.15;
    printf("Kelvin: %.4lf", kelvin );
    
    
    return 0;
}