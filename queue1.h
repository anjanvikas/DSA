typedef struct node{int data;struct node *next;}node;
typedef struct queue{node *front;node *rear;}queue;
void enqueue(queue *,data);
void dequeue(queue *);

