#include<stdio.h>
int main(void)
{
	int a;
	double b;
	scanf("%d",&a);
	if(a>=0&&a<=150)
	b=0.4463*a;
	printf("%.1f",b);
	else if(a>=151&&a<=400)
	b=150*0.4463+(a-150)*0.4663;
	printf("%.1f",b);
	else
	b=150*0.4463+250*0.4663+(a-400)*0.5663;
	printf("%.1f",b);
	return 0;	
}
