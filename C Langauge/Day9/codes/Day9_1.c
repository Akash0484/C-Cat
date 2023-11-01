#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;

    *ptr = 100; 
   
    char ch = 'A';
    char *cptr = &ch;
   
    float fvar = 11.3;
    float *fptr = &fvar;
   
    double dvar = 10.3; 
    double *dptr = &dvar;  

    // printf("%d ",*ptr); 
    // printf("%c ",*cptr);
    // printf("%.2f ",*fptr);
    // printf("%.2lf ",*dptr);   

    //scale factor 
     printf("%d ",sizeof(*ptr)); // 4 
     printf("%d ",sizeof(*cptr)); // 1
     printf("%d ",sizeof(*dptr)); // 8 
     printf("%d ",sizeof(*fptr)); // 4

    return 0;
}