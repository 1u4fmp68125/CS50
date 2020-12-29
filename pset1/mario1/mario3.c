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
        //最左側空白格子
        for (int z = x-1 ; z > y ;z-- )
        {
            printf(" ");
        }

        //左側的方塊
        for (int i = -1 ; i < y; i++)
        {
          printf("#");
        }

        //中間的空白
        for (int q = x-1;q<x;q++)
        {
            printf("  ");
        }

        //右側的方塊
        for (int g = -1; g<y ;g++)
        {
            printf("#");
        }
        printf(" \n");
    }
}