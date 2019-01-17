typedef struct node{int data;struct node *next;}node;
node *checker(node *);
node *creation(int );
node add(int ,node *);
node addatbeg(node **);
node delete(node *);
node deleteatbeg(node **);
void reverse(node **);
