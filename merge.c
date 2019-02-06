#include<stdio.h>
#include<stdlib.h>
void merge(int *a,int *l,int *r,int sl,int sr)
{int i=0,j=0,k=0;
 while(i!=sl ||j!=sr)
 {if(i==sl)
  {a[k]=r[j];
   k++;
   j++;
   continue;
  }
  if(j==sr)
  {a[k]=l[i];
   k++;
   i++;
   continue;
  }
  if(l[i]>=r[j])
   {a[k]=r[j]; 
    k++;
    j++;
   }
   else
   {a[k]=l[i];
    k++;
    i++;
   }
 }
}
void mergesort(int *a,int n)
{if(n<2)
 {return;
 }
 int mid=n/2;
 int *l=(int*)malloc(sizeof(int)*mid);
 int *r=(int*)malloc(sizeof(int)*(n-mid));
 for(int i=0;i<mid;i++)
 {l[i]=a[i];
 }
 for(int i=mid;i<n;i++)
 {r[i-mid]=a[i];
 }
 mergesort(l,mid);
 mergesort(r,n-mid);
 merge(a,l,r,mid,n-mid);
 free(l);
 free(r);
 
}
