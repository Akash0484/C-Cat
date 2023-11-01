#include<stdio.h> 

int main( )
{
    char *numbers[] = {"One","Two","Three","Four"}; 

    //printf("%u ",numbers[0]);//4214784
    //printf("%u ",numbers[1]);//4214788
    //printf("%u ",numbers[2]);//4214792 
    //printf("%u ",numbers[3]);//4214798

    // printf("%u ", *(numbers + 0 ) );
    // printf("%u ", *(numbers + 0 ) + 1 );
    // printf("%u ", *(numbers + 0 ) + 2 );
    // printf("%u ", *(numbers + 0 ) + 3 );

    // printf("%c ", *(*(numbers + 0 ) + 0 ) ); // O 
    // printf("%c ", *(*(numbers + 0 ) + 1 ) ); // n 
    // printf("%c ", *(*(numbers + 0 ) + 2 ) ); // e
    // printf("%d ", *(*(numbers + 0 ) + 3 ) ); // 0 

    printf("%c ", *(*(numbers + 0 ) + 0 ) ); // O 
    printf("%c ", numbers[0][0] ); // O   
    
    return 0; 
}