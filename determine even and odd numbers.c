#include<stdio.h>

int main()
{
    int num;
    printf("\n \n ====== This code will determine even and odd numbers ====== \n");
    printf("\n Enter a number to check. \n");
    scanf("%d",&num);
    if((num%2)==0){
        printf("%d is even.", num);
    }
    else{
        printf("%d is odd.", num);
    }

    return 0;
}
