#include<stdio.h>
#include<stdlib.h>
#include"link_fun.h"
node *checker(node *ptr)
{while(1)
 {if(ptr!=NULL)
  {return ptr;
  }
  else
  {ptr=(node*)malloc(sizeof(node));
  }
 }
}
node *creation(int n)
{if(n!=0){
 node *head=(node*)malloc(sizeof(node));
 head=checker(head);
 node *temp=head;
 for(int i=0;i<n;i++)
 {node *point=(node*)malloc(sizeof(node));
  point =checker(point);
  scanf("%d",&temp->data);
  if(i!=n-1){
  temp->next=point;
  temp=point;}
  else
  {temp->next=NULL;
  }
 }
 return head;
	 }
}
node add(int index,node *head)
{
 node *temp=head;
 int data;
 scanf("%d",&data);
 for(int i=0;i<index-1;i++)
 {temp=temp->next;
 }
 node *new=(node*)malloc(sizeof(node));
 new=checker(new);
 new->next=temp->next;
 temp->next=new;
 new->data=data;
}
node addatbeg(node **head)
{int data;
 scanf("%d",&data);
 node *newhead=(node* )malloc(sizeof(node));
 newhead=checker(newhead);
 if(*head!=NULL){
 newhead->next=*head;}
 else
 {newhead->next=NULL;
 }
 newhead->data=data;
 *head=newhead;
}
node delete(node *head)
{int n;
 scanf("%d",&n);
 node *temp1=head;
 node *temp2;
 for(int i=0;i<n-1;i++)
 {temp2=temp1;
  temp1=temp1->next;
 }
 temp2->next=temp1->next;
 free(temp1);
}
node deleteatbeg(node **head)
{node *temp=*head;
 *head=(*head)->next;
 free(temp);
}
void reverse(node **head)
{node *temp=NULL;
 node *a=NULL;
 node *b;
 b=*head;
 a=NULL;
 while(b!=NULL)
 {temp=b->next;
  b->next=a;
  a=b;
  b=temp;
}
 *head=a;
 temp=*head;
 for(int i=0;temp!=NULL;i++)
 {printf("%d ",temp->data);
  temp=temp->next;
 }


}

