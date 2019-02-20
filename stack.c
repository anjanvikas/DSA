#include<stdio.h>
#include<stdlib.h>
#include"dot.h"
#include"stack.h"
stack *createstack(int size)               		//A single stack with array elements in it.
{stack *node1=(stack*)malloc(sizeof(stack));
 node1->data=(node**)malloc(size*sizeof(node));
 node1->capacity=size;
 node1->top=-1;
 return node1;
}

int isfull(stack *st)
{return st->top==st->capacity;
}
int isempty(stack *st)
{return st->top==-1;
}
/*
void printstack(stack *st)
{if(!(isempty(st)))
  {	for(int i=0;i<=(st->top);i++)
        {printf("%d ",(st->data)[i]);
        }
        printf("\n");
 }
}*/
void push(stack *st,node *d)
{if(!(isfull(st)))
	{
	  st->top=(st->top)+1;
	 (st->data)[st->top]=d;
	}
}
node *pop(stack *st)
{if(!(isempty(st)))
	{ 
	 (st->top)=(st->top)-1;
	 return (st->data)[(st->top)+1];
	}
}

