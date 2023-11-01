#include<stdio.h>
int main()
{
    int num1; 
    char ch; 

    // printf("Enter the char and int"); 
    // scanf("%c%d",&ch,&num1);     

    printf("Enter the int and char"); 
    scanf("%d%*c%c",&num1,&ch);     

    printf("%d %c",num1,ch); 
    return 0;
}

// int main()
// {
//     int num1; 
//     char ch; 

//     printf("Enter the num: "); 
//     scanf("%d",&num1); 

//     printf("Enter the character: "); 
//     scanf("%*c%c",&ch); 


//     printf("%c %d",ch,num1); 
//     return 0;
// }

// int main()
// {
//     int num1; 
//     char ch; 
//     printf("Enter the character: "); 
//     scanf("%*c%c",&ch); 

//     printf("Enter the num: "); 
//     scanf("%d",&num1); 
    
//     printf("%c %d",ch,num1); 
//     return 0;
// }

// int main()
// {
//     char ch; 
//     printf("Enter the char: "); 
//     scanf("%*c%c",&ch);
//     printf("%c",ch);  
//     return 0;
// }

// int main()
// {
//     char ch; 
//     printf("Enter the char: "); 
//     scanf("%c",&ch);
//     printf("%c",ch);  
//     return 0;
// }
