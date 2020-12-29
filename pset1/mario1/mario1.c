#include <stdio.h>
#include <cs50.h>

//輸入一個介於1-8之間的的整數(integer)
//若輸入的不是合乎規範的值，則再重複一次輸入聲明
int main(void)
{
    int x;
    do
    {
        x = get_int("請輸入一個1到8之間的整數：\n");
    }
    while (x < 1 || x > 8);

    for (int y = 0; y < x ; y++)
    {
        for (int z = -1; z < y ; z++)
        {
            printf("#");
        }

        printf(" \n");
    }
}