#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,sum=0,n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("The Summation: %d \n",sum);
}
