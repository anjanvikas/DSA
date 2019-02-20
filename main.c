#include<stdio.h>
#include<stdlib.h>
#include"dot.h"
int main()
{int a[]={0,1,2,3,4,5};
 node *arr=buildbst(&a[0],0,5);
 pre_order(arr); 
 printf("\n");
 in_order(arr);
 printf("\n");
	return 0;
}
