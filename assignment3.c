#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// To check if input is a word or not?

bool isWord(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isalpha(input[i]))
        {
            return false;
        }
    }
    return true;
}

// To check if input is a space or not?

bool isSpace(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isspace(input[i]))
        {
            return false;
        }
    }
    return true;
}

// To check if input is an uppercase sentence or not?

bool isUpperCaseSentence(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isupper(input[i]) && !isspace(input[i]))
        {
            return false;
        }
    }
    return true;
}

// To check if input is a lowercase sentence or not?

bool isLowerCaseSentence(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!islower(input[i]) && !isspace(input[i]))
        {
            return false;
        }
    }
    return true;
}

// To check if input is an arithmetic expression or not?

bool isArithmeticExpression(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != '%')
        {
            return false;
        }
    }
    return true;
}

// To check if input arithmetic expression is true or not?

bool isArithmeticExpressionTrue(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '%')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char input[100];
    printf("Enter a value: ");
    scanf("%[^\n]s", input);

    if (isWord(input))
    {
        printf("The input is a word.\n");
    }
    else if (isSpace(input))
    {
        printf("The input is a space.\n");
    }
    else if (isUpperCaseSentence(input))
    {
        printf("The input is an uppercase sentence.\n");
    }
    else if (isLowerCaseSentence(input))
    {
        printf("The input is a lowercase sentence.\n");
    }
    else if (isArithmeticExpression(input))
    {
        if (isArithmeticExpressionTrue(input))
        {
            printf("The input is an arithmetic expression.\n");
        }
        else
        {
            printf("The input is not an arithmetic expression.\n");
        }
    }
    else
    {
        printf("The input is a string.\n");
    }

    return 0;
}