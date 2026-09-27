/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int P, C, E, Total;
    printf("Enter produced components per cycle= ");
    scanf("%d", &P);
    printf("Enter cycles completed = ");
    scanf("%d", &C);
    printf("Enter the additional components = ");
    scanf("%d", &E);
    Total = (P*C)+E;
    printf("Total components produced = , %d", Total);

}