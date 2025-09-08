#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50},i;
	for(i=0;i<=5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
a[2]=25;
	printf("\nafter updation\n");
	for(i=0;i<=5;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
