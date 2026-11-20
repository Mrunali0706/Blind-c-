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
    printf("use of functions");
    total = sum(12, 8);
    printf("sum of numbers : %d", total);
}
int sum (int a, int b)
{
    int s;
    s= a+b;
}