#include<stdio.h> 

int main( )
{
    char *numbers[] = {"zero","One","Two","Three","Four"}; 
    //printf("%d",sizeof(numbers)); // 5 * 4 => 20 
    int num; 
    printf("Enter the number"); 
    scanf("%d",&num);// 2 
    printf("%s",numbers[num]);// numbers[2] 
    return 0; 
}

/*
       char *str1 = "One";   
       char *str2 = "Two";
       char *str3 = "Three";

       char *str[] = {"one","Two","Three"}; 

*/