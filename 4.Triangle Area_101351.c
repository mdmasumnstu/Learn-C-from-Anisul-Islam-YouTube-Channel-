#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float s,ar;
	printf("Enter the perimeter:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	s=(a+b+c)/2;
	ar= sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Area of Triangle: %.2f",ar);
	
}
