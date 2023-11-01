#include <stdio.h>
int main(void)
{
    extern int value;
    printf("%d ", value);
    {
        int value = 100;
        printf("%d ", value);
    }
    return 0;
}
int value = 100;