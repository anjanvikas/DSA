#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sort.h"

int partition(int *a,int x,int y)
{int i=x+1;
 int j=y,temp;
 while(i<=j)
 {while(i<=j && a[i]<=a[0]){i++;};
  while(i<=j && a[j]>a[0]){j--;};
  if(i<=j)
  {temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   i++;
   j--;
  }
 }
 return j;
}
void quicksort(int *a,int x,int y)
{srand(time(0));
 int p=(rand()%(y-x))+x;
 int k=a[0];
 a[0]=a[p];
 a[p]=k;
 k=partition(a,x,y);
 quicksort(a,0,k);
 quicksort(a,k+1,y);
}
