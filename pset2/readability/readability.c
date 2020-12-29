#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int letters(string x);
int words(string x);
int sentences(string x);
float grades(int x, int y, int z);

int main(void)
{
    // input a text by Users
    string text = get_string("Text: ");
    //get the number of letters in the article.
    int letters_count = letters(text);
    //get the number of words in the article.
    int words_count = words(text);
    //get the number of sentences in the article.
    int sentences_cout = sentences(text);
    //calculate the grade of the text.
    float grade = grades(letters_count, words_count, sentences_cout);

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }

    else if (grade > 0 && grade < 16)
    {
        printf("Grade %i\n", (int) round(grade));
    }

    else
    {
        printf("Before Grade 1\n");
    }
}

//function letters
int letters(string x)
{
    int a = 0;
    for (int i = 0, n = strlen(x); i < n; i++)
    {
        if ((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
        {
            a++;
        }
    }
    return a;
}

//function words
int words(string x)
{
    int a = 1;
    for (int i = 0, n = strlen(x); i < n; i++)
    {
        if (x[i] == ' ') // char'' string" "
        {
            a++;
        }
    }
    return a;
}


//function sentences
int sentences(string x)
{
    int a = 0;
    for (int i = 0, n = strlen(x); i < n; i++)
    {
        if (x[i] == '.' || x[i] == '?' || x[i] == '!')
        {
            a++;
        }
    }
    return a;
}

//function grade
// x = letters ; y = words ; z = sentences
float grades(int x, int y, int z)
{
    float index = 0.0588 * (100 * (float)x / (float)y) - 0.296 * (100 * (float)z / (float)y) - 15.8;
    return index;
}
