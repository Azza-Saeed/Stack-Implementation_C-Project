/*
 * stack.h
 *
 * Created: 11/8/2023 3 PM
 *  Author: Azza Saeed
 */


#ifndef STACK_H_
#define STACK_H_

#define SIZE 100

typedef struct{
    int size;
    int top;
    int *arr;
 }str;

 /*
 * Description: function to create the stack
 * input: size of the stack
 * return: address the stack
 */
str * Create(int sizze);
 /*
 * Description: function to push element on the stack
 * input: data and address the stack
 * return: nothing
 */
void Push(int data,str *ptr);
 /*
 * Description: function to pop element from the stack
 * input: address the stack
 * return: element you popped
 */
int pop(str *ptr);
 /*
 * Description: function to check if the stack empty or not
 * input: address the stack
 * return: check
 */
int Isempty(str *ptr);
 /*
 * Description: function to check if the stack full or not
 * input: address the stack
 * return: check
 */
int IsFull(str *ptr);
 /*
 * Description: function to print elements of the stack
 * input: address the stack
 * return: nothing
 */
void PrintStack(str *ptr);
void Runable_Fun(void);


#endif /* STACK_H_ */

