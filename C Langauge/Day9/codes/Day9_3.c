#include<stdio.h>

void sumpro(int *a, int *b, int *ps, int *pp) {
      *ps = *a + *b; 
      /*
           valueat(ps) = valueat(a) + valueat(b)
                       = valueat(100) + valueat(200)
                       =     12       +   4 
                       =      16 
           valueat(300)=>                 
      */  
     *pp = *a * *b;
     /*
           valueat(pp) = valueat(a) * valueat(b)
                       = valueat(100) * valueat(200)
                       =     12       *   4 
                       =     48  
           valueat(300)=>                 
      */ 
    
}
int main() {
 int x = 12, y = 4, s, p;
 sumpro(&x, &y, &s, &p);
 printf("%d %d", s, p); // 16 48 
 return 0;
}
