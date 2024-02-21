#include<stdio.h>

//function declaration
float simpleInterest(int p, int r, int t);

int main()
{
    printf("This function aill calculate the simple interest of a client.\n \n");
    int p, r, t;

    printf("Enter Principal: \n");
    scanf("%d", &p);
    printf("Enter Rate: \n");
    scanf("%d", &r);
    printf("Enter Time(in months): \n");
    scanf("%d", &t);
    printf("Principal is %d \nRate is %d\% \nTime is %d month(s) \nSimple interest is %.2f \n\n",p,r,t, simpleInterest(p,r,t));


    return 0;
}

float simpleInterest(int p, int r, int t)
{
    float interest = (float)(p*r*t)/(float)100;
    return interest;
}
