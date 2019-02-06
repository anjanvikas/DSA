#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sort.h"
int main()
{srand(time(0));
 int n=(rand()%8)+3;
 int *a=(int*)malloc(sizeof(int)*(n));
 for(int i=0;i<n;i++)
 {a[i]=(rand()%9)+1;
 }

 for(int i=0;i<n;i++)
 {printf("%d ",a[i]);}
 printf("\n");

quicksort(a,0,n-1);
for(int i=0;i<n;i++)
{printf("%d ",a[i]);
}
printf("\n");
 free(a);
	return 0;
}
