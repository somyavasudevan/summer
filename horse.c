nclude <math.h>
#include <stdio.h>
int main()
{
int T,a,i,j,k;
long int s[5000], min, ans;
scanf("%d",&T);
for(k=0;k<T;k++)
{
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%ld",&s[i]);
}
min=1000000000;
for(i=0;i<a;i++)
for(j=0;j<a;j++)
{
if(i!=j)
{
ans=abs(s[i]-s[j]);
if (ans<min)
min=ans;
}
}
printf("%ld\n",min);
}
return 0;
}
 
