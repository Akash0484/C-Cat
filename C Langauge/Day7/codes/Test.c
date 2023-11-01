#include<stdio.h>
// int main( void )
// {
// int var1=100,var2=200;
// var2-= var1--;
// //var2 = var2 - var1--
// //     = 200  - 100
// //     = 100 
// // var2 = 100  
// // var1 = 99 
// printf("var2=%d var1=%d",var2, var1);
// return 0;
// }

// #include <stdio.h>
// int main( void )
// {
// int num1,num2,num3;
// num1 = 144;
// num2 = 156;
// //                    145   
// num3 = printf("%10d",++num1 ) + ++num2;
// //               10           +  157 
// //                    167   


// printf(" %d",num3);// 167 
// return 0;
// }

// //                          
// //            - - - - - - - - - - 

// #include<stdio.h>
// int main( void )
// {
// int num1 = 0, num2 = -1 , num3 = -2, num4 = 1, ans;
// ans = num1++ && num2++ || ++num4 && num3++;
//    // (num1++ && num2++) || (++num4 && num3++;) 
//    //          F         ||   T 
//    //                   T  

// printf("%d %d %d %d %d",num1, num2, num3, num4, ans);
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// char i = 48;
// switch (i)
// {
// case '2': printf("SunBeam Karad");break;  // case 50 : 
// case '1': printf("SunBeam Market Yard");break; // case 49: 
// default : printf("SunBeam IT Park Hinjewadi");
// }
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// int i=5;
// if (!printf("0")) // if(1)=>if(!1)=>if(0)
// i = 3;
// else
// i = 5;
// printf("%d", i); // 5 
// return 0;
// } // 05 

 //if(!printf("")) => if(0) => if(1)

 // printf("123") => 3 
 // printf("12") =>2 
 //printf("1") => 1 

#include<stdio.h>
int main( void )
{
char check = 'a'; // 97 
again:
if(check) // 97 
{
switch (check)
{
case ('a'=='b' || 1 ) : printf("PG-DAC "); break; // case 1:  
case 0 && 'b'=='a' : printf("PG-DMC "); break; // case 0: 
default : printf("PG-DITISS"); break; 
}
}
else
goto again;
return 0;
}
