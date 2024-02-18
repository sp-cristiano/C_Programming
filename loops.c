#include<stdio.h>

int main()
{
    int i;
    /** for loop */

    printf("\n ====== This will use the \"for loop format\" to print numbers from 0 to 9 ====== \n");
    for(i=0; i<10; i++)
    {
        printf("\n %d \n", i);
    }

    printf("\n \n ====== This will use the \"while loop format\" to print numbers from 3 to 9 ====== \n");
    int p = 3;

    while(p<10)
    {
        printf("\n %d \n", p);
        p++;
    }

    printf("\n \n ====== This will use the \"Do while loop format\" to print a statement then print numbers from 1 to 9 ====== \n");
    int q = 1;
    do
    {
        //printf("\n This is the printed statement \n");
        printf("\n \n Value of q is %d \n", q);
        q++;
    }
    while(q<10 && q>=2);
    return 0;
}
