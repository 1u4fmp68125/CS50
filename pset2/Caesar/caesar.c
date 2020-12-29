#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool check_key(string x);

int main(int argc, string argv[])
{

    //check user’s command line
    if(argc != 2 || check_key(argv[1]))
    {
        printf("Usage: ./caesar key\n");
    }

    // int j is the key of the ciphertext
    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");

    //Iterate over each character of the plaintext:
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            char m = 'A';
            if (islower(c))
                m = 'a';
            printf("%c", (c - m + key) % 26 + m);
        }
        else
            printf("%c", c);
    }
    printf("\n");
}

bool check_key(string x)
{
    for (int i = 0, n = strlen(x); i < n; i++)
    {
        if (!isalpha(x[i]))
        {
            return false;
        }
    }
    return true;
}