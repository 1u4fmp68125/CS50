#include <stdio.h>
#include <cs50.h>
#include <string.h>

int collatz(int i);

int main(void)
{
    int n;
    //輸入一個正整數
    do
    {
        n = get_int("input: ");
    }
    while( n <= 0);

    //打印出遞迴的次數、輸入值與結果
    printf("It took %i steps for %i to reach 1.\n", collatz(n), n);

}

//Collatz涵式
int collatz(int i)
{
    //輸出的結果
    if (i == 1)
        return 0;

    //若數字是偶數
    else if (i % 2 == 0)
        return 1 + collatz(i/2);

    //若數字是奇數
    else
        return 1 + collatz((i*3) + 1);
}