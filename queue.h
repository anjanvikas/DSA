typedef struct queue{int capacity;int front;int rear;int size;int *data;}queue;
void printqueue(queue *);
void enqueue(queue *,int );
int dequeue(queue *);
queue *createqueue(int );
int isfull(queue *);
int isempty(queue *);
int front(queue *);
int rear(queue *);
