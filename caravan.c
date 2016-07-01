#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int j,c=1,p;
        scanf("%d",&p);
        for(j=1;j<n;j++)
        {
            int s;
            scanf("%d",&s);
            if(s<=p)
            {
                c++;
                p=s;
            }
 
        }
        printf("%d\n",c);
 
    }
    return 0;
} 
