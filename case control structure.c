#include<stdio.h>

int main()
{
    /**
    we will be using switch, break, continue and Goto
    */

    printf("\n\n we will be using switch, break, continue and Goto \n\n");
    int x;

    printf("\n Enter the value of x: ");

    scanf("%d", &x);

    switch(x%2)
    {
        case 1:
            printf(" X is not divisible by 2");
            break;
        case 0:
            printf("X is divisible by 2");
            break;
        default:
            printf("I don't know");
            break;

    }

    printf("\n");
    printf("\n ====== More switch statements ====== \n");
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            printf("\n Coming out of the for loop when i = 5 \n");
            break;
        }
        printf("\n %d \n",i);
    }

    printf("\n ====== Using the Continue statements ====== \n");
    int r;
    for(r=0;r<10;r++)
    {
        if(r==5 || r == 6)
        {
            printf("\n Skipping %d \"continue statement\" \n", r);
            continue;
        }
        printf("\n %d", r);
    }

    printf("\n ====== Using the goto statements ====== \n");

    int z;
    for(i=0; z<10; z++)
    {
        if(z==4)
        {
            printf("\n Goto statement when z = 4 \n");
            goto Label;
        }
        printf("\n %d \n", z);
    }
    Label:printf("\n Value of z is 4 \n");

    return 0;


}
