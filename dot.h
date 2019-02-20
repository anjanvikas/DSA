#ifndef HEADER_FILE
#define HEADER_FILE
typedef struct node{int data;struct node *lc;struct node *rc;}node;
node *buildbst(int *,int ,int);
void pre_order(node *);
void in_order(node *);
void post_order(node *);
#endif
