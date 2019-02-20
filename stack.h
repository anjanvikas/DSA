#include"dot.h"
typedef struct n{int top;int capacity; node **data;}stack;//top->index
void printstack(stack* );
void push(stack* ,node* );
node *pop(stack* );
int isfull(stack* );
int isempty(stack* );
stack *createstack(int );
