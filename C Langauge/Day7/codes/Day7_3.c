#include <stdio.h>

int main()
{
    enum operations
    {
        ADD = 1,
        SUB
    };
    int num1, num2;
    int ans;
    //int choice;
    enum operations choice;
    //menu-driven programming
    do
    {
        printf("1.Addition \n");
        printf("2.Subtraction \n");

        printf("Enter the choice");
        scanf("%d", &choice);

        printf("Enter the num1 and num2:\n");
        scanf("%d%d", &num1, &num2);

        switch (choice)
        {
        case ADD:
            ans = num1 + num2;
            printf("ans = %d", ans);
            break;

        case SUB:
            ans = num1 - num2;
            printf("ans = %d", ans);
            break;

        default:
            printf("Invalid");
            break;
        }
        printf("\n 0 to exit and 1 to continue");
        scanf("%d", &choice); //1
    } while (choice != 0);
    return 0;
}

// int main( )
// {
//     int num1,num2;
//     int ans;
//     int choice;
//     //menu-driven programming
//     do
//     {
//         printf("1.Addition \n");
//         printf("2.Subtraction \n");

//          printf("Enter the choice");
//         scanf("%d",&choice);

//         printf("Enter the num1 and num2:\n");
//         scanf("%d%d",&num1,&num2);

//         switch (choice)
//         {
//         case 1:
//             ans = num1 + num2;
//             printf("ans = %d",ans);
//             break;

//         case 2:
//             ans = num1 - num2;
//             printf("ans = %d",ans);
//             break;

//         default:
//             printf("Invalid");
//             break;
//         }
//     printf("\n 0 to exit and 1 to continue");
//     scanf("%d",&choice); //1
//     }while(choice!=0);
//     return 0;
// }
// int main( )
// {
//     int num1,num2;
//     int ans;
//     int choice;

//     printf("1.Addition \n");
//     printf("2.Subtraction \n");

//     printf("Enter the num1 and num2:\n");
//     scanf("%d%d",&num1,&num2);

//     printf("Enter the choice");
//     scanf("%d",&choice);

//     switch (choice)
//     {
//     case 1:
//         ans = num1 + num2;
//         printf("ans = %d",ans);
//         break;

//     case 2:
//         ans = num1 - num2;
//         printf("ans = %d",ans);
//         break;

//     default:
//         printf("Invalid");
//         break;
//     }

//     return 0;
// }