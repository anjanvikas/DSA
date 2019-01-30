#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
int isfull(queue *q)
{return (q->size)==(q->capacity);
}
int isempty(queue *q)
{return (q->size)==0;
}
int front(queue *q)
{return q->front;
}
int rear(queue *q)
{return q->rear;
}
queue *createqueue(int c)
{queue *node=(queue*)malloc(sizeof(queue));
 node->capacity=c;
 node->front=0;
 node->rear=-1;
 node->size=0;
 node->data=(int *)malloc(sizeof(int)*c);
 return node;
}
void enqueue(queue *q,int data)
{if(!(isfull(q)))
 {
 	 (q->rear)=((q->rear)+1)%(q->capacity);
	 (q->data)[q->rear]=data;
	 (q->size)=(q->size)+1;
 }
}
int dequeue(queue *node)
{if(!(isempty(node)))
	{ int data=(node->data)[node->front];
	  (node->front)=((node->front)+1)%node->capacity;
	  (node->size)=(node->size)-1;
	  return data;
	}
}
void printqueue(queue *q)
{int a=(q->front)-1;
 while(!(a==(q->rear)))
 {a=(a+1)%(q->capacity);
  printf("%d ",(q->data)[a]);
 }
 printf("\n");
}


