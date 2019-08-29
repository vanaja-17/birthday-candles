#include<stdio.h>
int main()
{
	int i,n,max=0,c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
	    }	
	    c=(a[i]!=max)?c+1:c;
	}
	printf("%d \n",max);
	printf("%d ",c);

}
