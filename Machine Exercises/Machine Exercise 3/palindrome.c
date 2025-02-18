#include <stdio.h>


int main()
{
    int number;
    int five;
    int four;
    int three;
    int two;
    int one;
    
    scanf("%d", &number);
    
    five = number % 100000 / 10000;
    four = number % 10000 / 1000;
    three = number % 1000 / 100;
    two = number % 100 / 10;
    one = number % 10;
    


    if(number >= 10000 && number <= 99999){
        if(five == one && four == two){
            printf("%d is palindromic", number);
        }else{
            printf("%d is not palindromic", number);
        }
    }else if(number >= 1000 && number <= 9999){
        if(four == one && three == two){
            printf("%d is palindromic", number);
        }else{
            printf("%d is not palindromic", number);
        }
    }else if(number >= 10 && number <= 99){
        if(two == one){
            printf("%d is palindromic", number);
        }
        else{
            printf("%d is not palindromic", number);
        }
    }else if(number >= 100 && number <= 999){
        if(three == one){
            printf("%d is palindromic", number);
        }
        else{
            printf("%d is not palindromic", number);
        }
    }else if(number >= 0 && number <= 9){
        printf("%d is palindromic", number);
    }
    else{
        printf("Invalid input, Number is not within the input range");
    }


    return 0;
}
