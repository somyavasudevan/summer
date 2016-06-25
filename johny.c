#include<stdio.h>
int main()
{
    int t,A[101],i,cnt,n,k;
    scanf("%d",&t);
    while(t--)
    {
        cnt=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&A[i]);
        }
        scanf("%d",&k);
        k=A[k];
        for(i=1;i<=n;i++)
        {
            if(k>=A[i])
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}  
