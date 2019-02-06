#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sort.h"
int main()
{
 int sl=(rand()%8)+3;
 int sr=(rand()%8)+3;
 int *l=(int*)malloc(sizeof(int)*sl);
 int *r=(int*)malloc(sizeof(int)*sr);
 int *a=(int*)malloc(sizeof(int)*(sl+sr));
/* for(int i=0;i<sl;i++)
 {l[i]=(rand()%9)+1;
 }
 for(int i=0;i<sr;i++)
 {r[i]=(rand()%9)+1;
 }

 for(int i=0;i<sl;i++)
 {printf("%d ",l[i]);}
 printf("\n");
 for(int i=0;i<sr;i++)
 {printf("%d ",r[i]);
 }
 printf("\n");
 */
 int l1[]={1,2,3,4,5,6};
 int r1[]={7};
 merge(a,&l1[0],&r1[0],6,1);
 for(int i=0;i<7;i++)
 {printf("%d ",a[i]);
 }
 printf("\n");
 free(l);
 free(r);
 free(a);
	return 0;
}
