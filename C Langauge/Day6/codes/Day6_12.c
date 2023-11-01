#include <stdio.h>

/*
        A or a => Android 
        B or b => Basic
        C or c => C programming 
        d or D => database 

*/
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("Android");
        break;
    case 'b':
    case 'B':
        printf("Basic");
        break;
    case 'c':
    case 'C':
        printf("C programming");
        break;
    case 'd':
    case 'D':
        printf("Database");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}