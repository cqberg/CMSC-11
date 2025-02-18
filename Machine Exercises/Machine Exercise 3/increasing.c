
#include <stdio.h>

int main()
{
    double num1;
    double num2;
    double num3;
    
    printf("Input a real number: ");
    scanf("%lf", & num1);
    printf("Input a real number: ");
    scanf("%lf", & num2);
    printf("Input a real number: ");
    scanf("%lf", &num3);
    
    if(num3 >= num2 && num3 >= num1){
        if(num2 > num1){
            printf("%.1lf, %.1lf, %.1lf", num1, num2, num3);
        }
        else{
            printf("%.1lf, %.1lf, %.1lf", num2, num1, num3);
        }
    }else if(num2 >= num3 && num2 >= num1){
        if(num3 > num1){
            printf("%.1lf, %.1lf, %.1lf", num1, num3, num2);
        }
        else{
            printf("%.1lf, %.1lf, %.1lf", num3, num1, num2);
        }
    }else if(num1 >= num3 && num1 >= num2){
        if(num3 > num2){
            printf("%.1lf, %.1lf, %.1lf", num2, num3, num1);
        }
        else{
            printf("%.1lf, %.1lf, %.1lf", num3, num2, num1);
        }
    }
    
    


    return 0;
}