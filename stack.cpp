/*
File Name		: stack.cpp
Description		: 
Author			: Garly Nugraha
Create at		: 20/03/2022
*/

#include "stack.h"

void Init(stack *s) {
	s->count = 0;
}

int isEmpty(stack *s) {
	return (s->count == 0);
}

int isFull(stack *s) {
	int Value;

	return (s->count == Value);
}

void Push(itemtype x, stack *s) {
	if(isFull(s)) {
		printf("Full Stack Data...!!\n");
	} else {
		s->item[s->count] = x;
	 	++(s->count);
	}
}

int Pop(stack *s) {
	if(isEmpty(s)) {
		printf("Empty Stack Data...!!\n");
	} else {
		--(s->count);
		return (s->item[s->count]);
	}
	
	return 0;
}
