#include<stdio.h> 
void sumpro( int a, int b); 
int main()
{
    auto int d;//auto indicates local variables  
    // ( in function variable )=> auto => optional 
    int c;  // if not init => Garbage 
    int a = 10, b = 4; // local variables 
    /*
            a,b,c,d will be created when main is called 
            on main's FAR ( on stack )
    */ 
    printf("c = %d",c); // Garbage 
    {
            int c = 10; 
            printf("\nc = %d",c); //10 
            {
                int c =100; 
                printf("\n c = %d",c); //100
                {
                    int c = 500; 
                    printf("c = %d",c); // 500 
                } 
            }   
    }

    //sumpro( a , b); // call 
    //printf("\n Inside the main %d %d",a,b); 
    return 0;
}
//               10     4  
void sumpro( int a, int b)
{
     int ps,pp;
     /*
         a,b,ps,pp will be created when sumpro is called 
         on sumpro's FAR 
     */  
    ps = a + b;  // 10 + 4 => 14 
    pp = a * b;  // 10 * 4 => 40 
    printf("\n sum = %d prod = %d",ps,pp); //14 40 
    a++; 
    b++; 
    /*
        modifying a,b in sumpro's FAR will not affect 
        main's "a" "b"

        // a,b,ps,pp wll be destroyed from the stack 

    */
}

