#include<stdio.h>
/**
This function will check if a number is positive.
*/

int main(){
    int a = 0;
    printf("\n Enter a number: ");
    scanf("%d", &a);
    if(a>0){
        printf("\n The number %d is positive", a);
    }
    else{
        printf("\n The number &d is negative", a);
    }
    return 0;
}
