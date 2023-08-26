
/*
 * stack.c
 *
 * Created: 11/8/2023 3 PM
 *  Author: Azza Saeed
 */
 #include <stdio.h>
 #include "stack.h"
 extern  str *ptr1;
str * Create(int sizze)
{
    str *newStr=(str*)malloc(sizeof(str));
    newStr->top=-1;
    newStr->size=sizze;
    newStr->arr=(int*)malloc(newStr->size * sizeof(int));

    return newStr;
}
void Push(int data,str *ptr)
{
    if(ptr)
    {
        if(IsFull(ptr) == 1)
    {
        ptr->top++;
        ptr->arr[ptr->top]=data;
        printf("Value pushed successful \n");
    }
    else
    {
        printf("Sorry stack is full no location to push...!!\n");
    }
    }
    else{
        printf("Please create a stack...!!\n");

    }


}
int pop(str *ptr)
{
    int res=-1;

    if(ptr)
    {
       if( Isempty(ptr) == 0 )
         {
            res=ptr->arr[ptr->top];
            ptr->top--;
         }
    else
        {
            printf("Sorry stack is empty no value to pop...!!\n");
        }

        }
    else{
            printf("Please create a stack...!!\n");

    }

    return res;
}
int Isempty(str *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(str *ptr)
{
    if(ptr->top==SIZE-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void PrintStack(str *ptr)
{
    int counter=0;
    if(ptr)
    {
      if( Isempty(ptr) == 0 )
        {

          for(counter=0;counter<=ptr->top;counter++)
          {
              printf("Value=%d\n",ptr->arr[counter]);
          }
         }
      else
        {
            printf("Stack is empty...!!\n");
        }
    }
    else{
         printf("Please create a stack...!!\n");
    }

}
void Runable_Fun(void)
{
    char Operation;
    int size=0;
    int data=0;
    printf("Welcome in Stack Implementation System...!\n");
    printf("Enter C to Create Stack                             Enter P to Push Variable in the stack \n");
    printf("Enter R to remove variable from the stack              Enter D to display the Stack \n");
    printf("Enter E to end ...\n");
    printf("                           *********************************                            \n");
    printf("Please enter the operation you need:\n");
    scanf("%c",&Operation);

    switch(Operation)
    {
    case 'C':
    case 'c':
        printf("Please enter size of the stack you need:\n");
        scanf("%d",&size);
        if( size<0 )
        {
            printf("Please enter Positive number...!");
            return;
        }
        else{
            // Do Nothing
        }
        ptr1=Create(size);
        if( ptr1 == NULL )
        {
            printf("stack Not created please try agaain...!\n");
        }
        else{
            printf("Stack created Successfuly \n");
        }
        break;
    case 'P':
    case 'p':
        if(ptr1 == NULL )
        {
            printf("Please create stack \n\n");
        }
        else{
            printf("please enter the value you need to add it:\n");
            scanf("%d",&data);
            Push(data,ptr1);
        }

        break;
    case 'R':
    case 'r':
        printf("poped value=%d\n",pop(ptr1));
        break;
    case 'D':
    case 'd':
        PrintStack(ptr1);
        break;
    case 'E':
    case 'e':
        return;
        break;
    default:
        return;
    }


}
