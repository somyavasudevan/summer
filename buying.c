 #include<stdio.h>
    int main()
    {
    int t,n,x,sum=0,k,min,i,a[100],amt;
     scanf("%d",&t);
    while (t--)
    { sum=0;
    scanf("%d %d",&n,&x);
    for( i=0;i<n;i++)
    {scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    min=a[0];
    i=1;
    while(i<n)
    {
    if(min>a[i])
    min=a[i];
    i++;
    }
    amt= sum/x;
    if(((sum-min)/x)==amt)
    printf("-1 \n");
    else
    printf("%d \n",amt);
    }
    return 0;
    }   
