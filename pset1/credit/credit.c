#include <stdio.h>
#include <cs50.h>
#include <math.h>

long number;


int main(void)
{
    do
    {
        number = get_long("Number: \n");

    }
    while(number < 0);

    if (number%100000000000000 == 51)
    {
        printf("Master Card\n");
    }
    else
    {
        printf("not Master\n");
    }


}