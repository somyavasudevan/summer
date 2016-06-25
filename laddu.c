#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
main()
{
    int t,rank,laddu,d,i,activity=0,ans;
    char str[100];
    scanf("%d",&t);
    while(t--)
    {
    laddu=0;
        scanf("%d %s",&activity,str);
        if(strcmp(str,"NON_INDIAN")==0)
        {
            d=400;
        }
        else
            d=200;
        while(activity--)
        {
 
                scanf("%s",str);
            if(strcmp(str,"CONTEST_WON")==0)
            {
            	laddu=laddu+300;
                scanf("%d",&rank);
                if (rank<20)
                {
                    laddu=laddu+(20-rank);
                }
 
            }
 
            else if(strcmp(str,"TOP_CONTRIBUTOR")==0)
                laddu=laddu+300;
            else if(strcmp(str,"BUG_FOUND")==0)
            {
                scanf("%d",&rank);
                if(rank>=50 && rank<=1000)
                    laddu=laddu+rank;
            }
            else if(strcmp(str,"CONTEST_HOSTED")==0)
                laddu=laddu+50;
        }
        ans=laddu/d;
        printf("%d\n",ans);
    }







}


