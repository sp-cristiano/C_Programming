#include<stdio.h>

void printReverse(int originalNum);

int main()
{
    printf("This function will print a given number in reverse order. \n\n");

    int originalNum;
    //receive user input
    printf("Enter a number: ");
    scanf("%d", &originalNum);

    printf("\n\nOriginal Number: %d \n\n", originalNum);

    printf("Number in reversed order: ");
    printReverse(originalNum);

    return 0;
}
void printReverse(int originalNum)
{
    int digit;
    while(originalNum != 0)
    {
        int digits = digit;
        digit = (originalNum % 10);  //Extract the last digit
        printf("%d",digit);             // prints the last digit
        originalNum /= 10;           // Remove the last digit from the number
    }
    printf("\n");
}
