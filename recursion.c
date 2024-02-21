#include<stdio.h>

int f(int n);

int main()
{
    int power = 4;
    int powerOf2 = f(power);
    printf("2 to the power of %d is %d ", power, powerOf2);
    return 0;

}

int f(int n)
{
    int y;
    if(n == 0)
    {
        return 1;
    }
    else
    {
        y = 2 * f(n-1);
        return y;
    }
}
