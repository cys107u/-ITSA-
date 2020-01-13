#include<stdio.h>
int main()
{
    int hour_1,hour_2,min_1,min_2;
    int time_1,time_2,time,cost=0;
    scanf("%d%d%d%d",&hour_1,&min_1,&hour_2,&min_2);
        time_1=hour_1*60+min_1;
        time_2=hour_2*60+min_2;
        time=time_2-time_1;
        if(time<0)
        {
            time+=(24*60);
        }
        time/=30;
        if(time>0)
        {
            if(time<=4)
            {
                cost+=time*30;
            }
            else
            {
                time-=4;
                cost+=120;
                if(time<=4)
                {
                    cost+=time*40;
                }
                else
                {
                    time-=4;
                    cost+=160;
                    if(time>0)
                    {
                        cost+=60*time;
                    }
                }
            }
        }
        printf("%d\n",cost);
    return 0;
}
