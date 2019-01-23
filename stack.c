#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
stack *createstack(int size)               		//A single stack with array elements in it.
{stack *node=(stack*)malloc(sizeof(stack));
 node->data=(int*)malloc(size*sizeof(int));
 node->capacity=size;
 node->top=-1;
 return node;
}

int isfull(stack *st)
{return st->top==st->capacity;
}
int isempty(stack *st)
{return st->top==-1;
}
void printstack(stack *st)
{if(!(isempty(st)))
  {	for(int i=0;i<=(st->top);i++)
        {printf("%d ",(st->data)[i]);
        }
        printf("\n");
 }
}
void push(stack *st,int d)
{if(!(isfull(st)))
	{
	  st->top=(st->top)+1;
	 (st->data)[st->top]=d;
	}
}
int pop(stack *st)
{if(!(isempty(st)))
	{ 
	 (st->top)=(st->top)-1;
	 return (st->data)[(st->top)+1];
	}
}
