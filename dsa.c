#include<stdio.h>
int main(){
	int sum=0,n,i;
	printf("enter the value of N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i*i;
	}
		printf("sum of square of first %d natural number is: %d",n,sum);
	
}

