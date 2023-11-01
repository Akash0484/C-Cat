#include<stdio.h> 
#include<stdlib.h>

#define SIZE 5

typedef struct 
{
    int arr[5]; 
    int top; 
}stack_t; 
void init_stack( stack_t *ps ); 
int is_stack_full( stack_t *ps ) ; 
void push_element(stack_t *ps, int ele ); 
int is_stack_empty( stack_t *ps); 
int peek_element( stack_t *ps );
void pop_element( stack_t *ps ); 
int menu( void  )
{
    int choice; 
    printf("0. Exit\n"); 
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("Enter the choice");
    scanf("%d",&choice); 
    return choice; 
}

enum menu_options{EXIT , PUSH , POP , PEEK};

int main( )
{
    stack_t s;
    int ele; 
    init_stack( &s );  
    while( 1 )
    {
        int choice = menu( );
        switch(choice)
        {
            case EXIT: 
            exit(0); 

            case PUSH: 
            //step1: check stack is not full 
            if(!is_stack_full( &s ))
            {
                printf("Enter the ele::\n");
                scanf("%d",&ele); 
                push_element(&s, ele );
                printf("%d is pushed onto the stack...\n",ele); 
            }
            else 
                printf("Stack Overflow !!!!\n"); 
            break;          

            case POP: 
            //step-1: check stack is not empty 
            if(!is_stack_empty( &s ))
            {
                    ele = peek_element( &s ); 
                    pop_element( &s ); 
                    printf("Popped ele is : %d\n",ele); 
            }
            else 
                printf("Stack is underflow!!!!\n"); 
            break; 

            case PEEK:
            //step-1: check stack is not empty  
            if(!is_stack_empty( &s ))
            {
                ele = peek_element( &s ); 
                printf("Topmost ele is : %d\n",ele); 
            }
            else 
                printf("Stack is underflow!!!\n"); 
            break; 


        }//end of switch 
    }//end of while loop 
    return 0; 
}

void init_stack( stack_t *ps )
{
    ps->top = -1; 
} 

int is_stack_full( stack_t *ps ) 
{
        if(ps->top == SIZE - 1 )
            return 1; 
        else 
            return 0; 
}
void push_element(stack_t *ps, int ele )
{
      //step2:increment the value of top by 1 
        ps->top++;  // ps->top = ps->top + 1     
      //step3:insert/push an element onto the stack at top end  
        ps->arr[ps->top] = ele;
}
int is_stack_empty( stack_t *ps)
{
        if(ps->top == -1)
            return 1; 
        else 
            return 0; 
}

int peek_element( stack_t *ps )
{
       return (ps->arr[ps->top]);  
}

void pop_element( stack_t *ps )
{
    //step-2: decrement the value of top by 1
      ps->top--; // ps->top = ps->top - 1;   
}
/*
    arr[0] = ele; 
    arr[top] = ele; 
    ps->arr[ps->top] = ele; 
*/