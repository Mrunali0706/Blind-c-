/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum();
int main()
{
    int total;
    printf("\n\n Function : a simple structure of function :\n");
    printf("-------------");
    total = sum (5, 5);
    printf("The total is : %d\n", total);
    return 0;
}
int sum(int a, int b)
{
    int s;
    s=a+b;
    return s;
}