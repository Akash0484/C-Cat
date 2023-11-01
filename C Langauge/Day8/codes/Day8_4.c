#include <stdio.h>
void sumpro(int a, int b);
int ps, pp; // Global variable 
/*
        ps and pp will be allocated from datasection 
        scope => program 
        life => program 
        by default => 0 
*/
int main()
{
    auto int d;

    int c;
    int a = 10, b = 4;

    sumpro(a, b);
    printf("%d %d", ps, pp);

    return 0;
}
void sumpro(int a, int b)
{

    
    ps = a + b; // 10 + 4 => 14
    pp = a * b; // 10 * 4 => 40
}
