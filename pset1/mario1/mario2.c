#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("請輸入一個1到8之間的整數：\n");
    }
    while(x < 1 || x > 8);

    for( int y = 0; y<x ;y++)
    {
        for( int z = x-1 ; z > y ;z-- )
        {
            printf(" ");
        }

        for(int i = -1 ; i < y; i++)
        {
          printf("#");
        }
        printf(" \n");
    }
}