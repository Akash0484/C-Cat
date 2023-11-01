#include <stdio.h>
void sumpro(int a, int b);
extern int ps,pp; // declaration ( compiler )  
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
int ps, pp; // Global variable ( defination )
