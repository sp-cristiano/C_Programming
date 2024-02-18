#include<stdio.h>

int main(){
    int number, originalNum, remainder, result, sum;

    printf("====== Armstrong numbers between 1 to 500 ====== \n");

    printf("Wrie a program to print out all Armstrong numbers between 1 and 500.\nIf sum of cubes of each digit of the number is equal to the number itself,\nthen the number is called an Armstrong number.\nFor Example, 153 = (1*1*1) + (5*5*5) + (3*3*3)\n\n");

    for(number = 1;number<=500; ++number)
    {
        originalNum = number;
        sum = 0;
        //Calculate the sum of cubes of each digit
        while(originalNum != 0){
            remainder = originalNum%10;
            sum += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (sum == number)
        {
            printf("%d is an Armstrong number \n", number);
        }

    }

    return 0;


}
