//this is my first C program

//#include<stdio.h>

//int main() {
    //s n;
  //  int n;
    //scanf("%i",&n);
    //printf("%i", n);
    //return 0;
//}

#include<stdio.h>

int main(){
    /**
     i;
    printf("Enter the a number: ");
    scanf("%d", &i);
    printf("\n Value entered for i is %d", i);
    printf("\n");*/


    printf("\n Assignment number 1: \n");
    float abc = 2.5;
    int big = 2;
    float g;
    g = big/2 + big*4/big - big + abc/3;
    printf("g = %f \n", g );

    printf("\n Assignment number 2: \n");
    int ink = 4;
    int act = 1;
    float tig =  3.2;
    int on;
    on = ink * act/2 + 3/2*act +2 + tig;
    printf("on = %i \n", on);

    printf("\n Assignment number 3: \n");
    int qui = 4;
    int add = 2;
    int god = 2;
    int s;
    s = qui*add/4 - 6/2 + 2/3*6/god;
    printf("s = %i \n", &s);

    printf("\n Assignment number 4: \n");
    g = (int)3;
    int a = 4;
    s = 1/3*a/4-6/2+2/3*6/g;
    printf("s = %i", s);

    /**
    This code check if a number is possitive.
    */
    a = 0;
    printf("\n Enter a number: ");
    scanf("%d", &a);
    if(a>0){
        printf("\n The number %d is positive", a);
    }
    else{
        printf("\n The number %d is negative", a);
    }



    return 0;
}
