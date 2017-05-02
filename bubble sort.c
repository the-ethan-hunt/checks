#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("how many number you want to sort??\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter your %dth number = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]= a[j] + a[j+1];
				a[j+1]= a[j] - a[j+1];
				a[j] = a[j] - a[j+1];
			}
		}
	}
	printf("your sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	getch();
	return 0;
}
