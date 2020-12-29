// caesar.c by Mark J. Rigdon
// CS50
// 2018-12-16
// Program encrypts messages using Caesar's cipher.

// Includes
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Declare values
    int key;
    string plaintext;

    // Must input one and only one key...specs don't require numeric chk.
    if (argc != 2)
    {
        printf("TERMINATED--Program requires a single key value.\n");
        printf("Rerun program with a single key value as a command line argument.\n");
        return 1;
    }
    else
    {
        // Turn key into an integer
        key = atoi(argv[1]);
        printf("Your selected shift key is: %i\n", key);
    }

    // Accept plain text to encrypt
    plaintext = get_string("plaintext: ");

    // Encipher and print the plaintext (preserve casing & numbers)
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        // Check for alphabetic letter
        if (isalpha(plaintext[i]))
        {
            // Check for lower case
            if (islower(plaintext[i]))
            {
                // preserve case, shift, and print.
                printf("%c", (((plaintext[i] + key) - 97) % 26) + 97);
            }
            // Check for upper case
            if (isupper(plaintext[i]))
            {
                // preserve case, shift, and print.
                printf("%c", (((plaintext[i] + key) - 65) % 26) + 65);
            }
        }
        else
        {
            // It's not alpha letter so it's a number:  Simply print the number.
            printf("%c", plaintext[i]);
        }

    }
    // Per spec... print a new line.
    printf("\n");

    // Per spec...exit with return 0.
    return 0;
}

