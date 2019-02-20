#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include"dot.h"
node *buildbst(int *arr,int i,int j)
{if(i<j)
 {int k=(i+j)/2;
  node *a=(node*)malloc(sizeof(node));
  a->data=arr[k];
  if(i<=k-1)
  {a->lc=buildbst(arr,i,k-1);
  }
  else
  {a->lc=NULL;
  }
  if(j>=k+1)
  {a->rc=buildbst(arr,k+1,j);
  }
  return a;
 }
 else
 {i=j;
  node *a=(node*)malloc(sizeof(node));
  a->data=arr[i];
  a->lc=NULL;
  a->rc=NULL;
  return a;
 }
}
void pre_order(node *a)
{stack *a1=createstack(10);
 push(a1,a);
 node *left;
 node *right;
 node *now;
while(!(isempty(a1)))
{now=pop(a1);
 if(now->rc!=NULL)
 {push(a1,now->rc);
 }
 if(now->lc!=NULL)
 {push(a1,now->lc);
 }
 printf("%d ",now->data);
}
 
}
void in_order(node *a)
{stack a1=createstack(10);
 push(a1,a);
 int c=0;
 node *temp=NULL;
 node *x=a;
 while(!(isempty(a1)) || temp==a)
 {if(c!=1)
  {for(int i=0;x->lc!=NULL;i++)
   {x=x->lc;
    push(a1,x);
   }
  }
  printf("%d ",x->data);
  if(x->rc!=NULL)
  {x=x->rc;
   c=0;
  }
  else
  {pop(a1);
   c=1;
  }
 }
}
