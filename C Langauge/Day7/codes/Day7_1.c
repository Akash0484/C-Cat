#include <stdio.h>

int main()
{
    // int , float ,double ,char => primitive
    // int x; // datatype variable-name

    int num = 10;

    //Datatype => enum color
    enum color
    {
        RED  ,BLUE,GREEN,VIOLET
        //RED=1,BLUE,GREEN,VIOLET
        //RED=1,BLUE=2,GREEN=3,VIOLET=4
        //RED,BLUE,GREEN=33,VIOLET
        //RED=-1,BLUE,GREEN=33,VIOLET
        //RED=-1,BLUE,GREEN=-1,VIOLET
        //RED='A',BLUE,GREEN=-1,VIOLET
        //RED=1.2,BLUE,GREEN=-1,VIOLET // NOT OK
        //RED=1 + 2 ,BLUE,GREEN=-1,VIOLET //  OK
        //RED=num ,BLUE,GREEN=-1,VIOLET // NOT OK
        //RED,BLUE,GREEN,VIOLET,red
        //RED,BLUE,GREEN,VIOLET,RED // NO OK
    };

    //Datatype variable-name
     enum color e1;
     printf("%d",sizeof(e1)); // 4    
    //e1 = RED;
    //RED++; // 0++ => 0 = 0 + 1
    //printf("%d ",e1); // 0
    //e1++;
    //printf("%d ",e1); // 1
    //printf("%d ",RED); // 0
    //printf("%d ",BLUE); // 1

    return 0;
}
// int main( )
// {
//     // int , float ,double ,char => primitive
//     // int x; // datatype variable-name

//     //Datatype => enum color
//     enum color
//     {
//           RED,BLUE,GREEN,VIOLET
//     };

//     //Datatype variable-name
//       enum color  e1;
//       e1 = RED;
//       //RED++; // 0++ => 0 = 0 + 1
//       //printf("%d ",e1); // 0
//       //e1++;
//       //printf("%d ",e1); // 1
//        printf("%d ",RED); // 0
//        printf("%d ",BLUE); // 1

//     return 0;
// }
/*
    enum IPL
    {
        MI , CSK , RR 
    }; 
*/