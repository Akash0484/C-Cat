#include <stdio.h>
void sumpro(int a, int b);
int ps, pp; // Global variable 
/*
        var declared inside the function => local variable 
        var declared outside the function => global variable 
*/
/*
            Global var => can be accessed throughout the program 
            stored in datasection 

          // created when program is started 
                    //even before main is called 
          //destroyed when program is terminated 
                    //after completion of main( )            

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

