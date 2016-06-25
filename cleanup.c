#include<stdio.h>
main()
{
	long int n,a[1001],m,i,j,k,v;
	scanf("%ld",&v);
	while(v)
	{
		scanf("%ld",&n);
		scanf("%ld",&m);
		for(i=1;i<=n;i++)
		a[i]=i;
		for(i=1;i<=m;i++)
		{
			scanf("%ld",&j);
			a[j]=0;
		}
 
		k=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]!=0)
			{
				if(k%2==0)
				printf("%ld ",a[i]);
				k++;
			}
		}
		printf("\n");
		k=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]!=0)
			{
				if(k%2!=0)
				printf("%ld ",a[i]);
				k++;
			}
		}
		printf("\n");
		v--;
	}

}
