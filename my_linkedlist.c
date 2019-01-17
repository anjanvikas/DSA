#include<stdio.h>
#include<stdlib.h>
#include"link_fun.h"
/*typedef struct node{int data;struct node *next;}node;
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
  temp->next=point;
  temp=point;
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
node delete(node *head,int n)
{
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
*/
int main()
{int n,index;
 scanf("%d",&n);
 node *head=creation(n);
 
 node *temp=head;
 for(int i=0;i<n;i++)
 {printf("%d ",temp->data);
  temp=temp->next;
 }
 /*
 printf("\nenter index:");
 int index;
 scanf("%d",&index);
 if(index!=0)
 {add(index,head);
 }
 else
 {addatbeg(&head);
 }
 temp=head;
 for(int i=0;i<n+1;i++)
 {printf("%d ",temp->data);
  temp=temp->next;
 }
 if(index!=0)
 {delete(index,head);
 }
 else
 {deleteatbeg(&head);
 }
 temp=head;
 for(int i=0;i<n;i++)
 {printf("%d ",temp->data);
  temp=temp->next;
 }*/
 while(1)
 {int k;
  printf("1.add\n2.addatbeginning\n3.delete\n4.deleteatbeginning\n5.reverse\n6.quit\n");
  scanf("%d",&k);
  switch(k)
  {case 1:
    printf("\nenter index:");
    scanf("%d ",&index);
    if(index!=0){
    add(index,head);}
    else
    {addatbeg(&head);
    }
    temp=head;
    n=n+1;
    for(int i=0;i<n;i++)
    {printf("%d ",temp->data);
    temp=temp->next;
    }

    break;
    case 2:
     addatbeg(&head);
     temp=head;
     for(int i=0;i<n;i++)
     {printf("%d ",temp->data);
     temp=temp->next;
     }
     n=n+1;
     break;

    case 3:
      delete(head);
      temp=head;
       for(int i=0;i<n-1;i++)
        {printf("%d ",temp->data);
         temp=temp->next;
         }
       n=n-1;
      break;
    case 4:
       deleteatbeg(&head);   
       n=n-1;
      break;
    case 5:
       reverse(&head);
       break;
    case 6:
       break;
    default:
        continue;
  } 
  if(k==6)
  {break;
  }

 }

temp=head;
 for(int i=0;i<n;i++)
 {printf("%d ",temp->data);
  temp=temp->next;
 }

 
return 0;
}
