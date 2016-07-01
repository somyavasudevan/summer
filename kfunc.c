#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[15],i,test,count;
    long long int l,r,a1,d,sum,p,x,sum1;
    scanf("%d",&test);
    while(test--)
    {
 
        scanf("%lld%lld%lld%lld",&a1,&d,&l,&r);
        sum=a1;
        sum1=0;
        for(i=0;i<9;i++)
        {
 
            arr[i]=(sum-1)%9;
            arr[i]++;
            sum=sum+d;
            sum1=sum1+arr[i];
   
        }
        x=r-l+1;
        sum=0;
        p=(l-1)%9;
   
        if(p)
        {
            for(i=p,count=0;count<x;i++,count++)
            {
                if(i==9)
                    break;
                sum=sum+arr[i];
            }
            x=x-count;
        }
        sum=sum+sum1*(x/9);
        x=x%9;
      
        for(i=0,count=0;count<x;count++,i++)
            sum=sum+arr[i];
      
        printf("%lld\n",sum);
      
    }
    return 0;
}
