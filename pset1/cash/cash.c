#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    int cent;
    int coins = 0;

    do
    {
        dollars = get_float("Change owned: \n");
        cent = round(dollars * 100);
    }
    while (dollars < 0.0);

    while(cent >= 25)
    {
        coins ++;
        cent = cent -25;
    }

    while(cent >= 10)
    {
        coins ++;
        cent = cent -10;
    }

    while(cent >= 5)
    {
        coins ++;
        cent = cent -5;
    }

    while(cent >= 1)
    {
        coins ++;
        cent = cent -1;
    }

    printf("%i\n",coins);

}