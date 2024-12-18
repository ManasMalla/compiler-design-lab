#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// WAP to check if the input is an integer or not?
bool isInteger(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isdigit(input[i]))
        {
            return false;
        }
    }
    return true;
}

// To check if the input is a float or not?

bool isFloat(char *input)
{
    int dotCount = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isdigit(input[i]) && input[i] != '.')
        {
            return false;
        }
        if (input[i] == '.')
        {
            dotCount++;
        }
    }
    if (dotCount > 1)
    {
        return false;
    }
    return true;
}

// To check if the input is an alphabet or not?

bool isAlphabet(char *input)
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

// To check if the input is uppercase or lowercase?

bool isUpperCase(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isupper(input[i]))
        {
            return false;
        }
    }
    return true;
}

// To check if the input is an arithmetic operator.

bool isArithmeticOperator(char *input)
{
    if (strlen(input) == 1 && (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/' || input[0] == '%'))
    {
        return true;
    }
    return false;
}

// To check if the input is a special character/symbol?

bool isSpecialCharacter(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (isalnum(input[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char input[100];
    printf("Enter a value: ");
    scanf("%s", input);

    if (isInteger(input))
    {
        printf("The input is an integer.\n");
    }
    else if (isFloat(input))
    {
        printf("The input is a float.\n");
    }
    else if (isAlphabet(input))
    {
        printf("The input is an alphabet.\n");
    }
    else if (isUpperCase(input))
    {
        printf("The input is an uppercase.\n");
    }
    else if (isArithmeticOperator(input))
    {
        printf("The input is an arithmetic operator.\n");
    }
    else if (isSpecialCharacter(input))
    {
        printf("The input is a special character.\n");
    }
    else
    {
        printf("The input is a string.\n");
    }

    return 0;
}