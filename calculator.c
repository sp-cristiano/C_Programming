#include<stdio.h>

//Function Declaration
int calculator(int a, int b, int operation);
int add(int a, int b);

int main()
{
    int a = 5;
    int b = 6;
    //Function call
    int result = calculator(a,b,1);
    printf("%d",result);
    return 0;
}

// Function Declaration
int calculator(int a, int b , int operation)
{
    if(operation == 1)
    {
        return add(a,b);
    }
}

// Function Declaration
int add(int a, int b)
{
    return a+b;
}

