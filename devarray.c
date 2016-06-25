#include <stdio.h>
main()
{
long int n,q,i;
scanf("%ld",&n);
scanf("%ld",&q);
long int a[n],p,min,max;
for(i=0;i<n;i++)
{
scanf("%ld",&a[i]);
}
min=a[0]; max=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
min = a[i];
if(a[i]>max)
max = a[i];
}
while(q--)
{
scanf("%ld",&p);
if(min<=p && p<=max)
{printf("Yes\n");}
else {printf("No\n");}
}
} 
