#include<stdio.h>
main()
{
	int i,n,t=0;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			t=1;
			break;
		}
	}
	if (t==0)
	printf("this is prime no ");
	else 
	printf("this no is not prime ");
}
