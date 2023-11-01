#include <stdio.h>
/*
        I/p => char 
        char => uppercase , lowercase , digit , special char 

        65 - 90 => Uppercase 
        97 - 122=> lower case 
        48 - 57 => digit 
        // \n \r \t \a \b => escape sequence 
        
*/
int main()
{
    char ch;
    //1. Input
    printf("Enter the character");
    ch = getchar();
    //scanf("%c",&ch);
    if (ch >= 97 && ch <= 122)
        printf("lower case");
    else
    {
        if (ch >= 65 && ch <= 90)
            printf("Uppercase ");
        else
        {
            if (ch >= 48 && ch <= 57)
                printf("Digit");
            else
                printf("Special symbol");
        }
    }

    return 0;
}