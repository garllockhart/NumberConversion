/*
File Name		: stack.h
Description		: 
Author			: Garly Nugraha
Create at		: 20/03/2022
*/

#ifndef stack_H
#define stack_H

#include <stdio.h>
#include <conio.h>

typedef int itemtype;

typedef struct
{
	itemtype item[300];
	int count;
}stack;

void Init(stack *s);
int isEmpty(stack *s);
int isFull(stack *s);
void Push(itemtype x, stack *s);
int Pop(stack *s);

#endif
