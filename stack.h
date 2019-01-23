typedef struct node{int top;int capacity;int *data;}stack;//top->index
void printstack(stack* );
void push(stack* ,int );
int pop(stack* );
int isfull(stack* );
int isempty(stack* );
stack *createstack(int );

