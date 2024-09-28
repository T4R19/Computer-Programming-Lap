#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int original = number;
    int sum = 0;
    int digits = 0;

    
    while (original != 0) {
        original /= 10;
        digits++;
    }//end while

    original = number;

    
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }//end while

    return sum == number;
}//end main function

int main() {
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }//end if

    return 0;
}//end function