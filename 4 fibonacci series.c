#include<stdio.h>
int main()
{
	int b,i,t,c,d;
	printf("Enter the limit :");
	scanf("%d",&b);
	t=0;
	c=1;
	d=t+c;
	printf("The fibnacci series :\n%d\t%d",t,c);
	for(i=3;i<=b;i++)
	{
		printf("\t%d",d);
    	t=c;
    	c=d;
    	d=t+c;
	}
}
