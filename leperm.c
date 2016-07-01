#include<stdio.h>
int main()
{
int t,i,j,y,z,n,a[100];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(n==1)
{
printf("YES\n");
continue;
}
y=z=0;
for(i=1;i<n;i++)
{
if(a[i]<a[i-1])
y++;
}
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
z++;
if(y==z)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}  
