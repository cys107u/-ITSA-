#include<stdio.h>
#include<string.h>
void become_star(char ans[5][24],int level,int start,int end)
{
    char star[1]="*";
    for(int i=start;i<=end;i++)
    {
        ans[level][i]='*';
    }
}

int main()
{
    int num[4],start=0,end=4,temp;
    char ans[5][24], space[24]="                       \0";
    //num[0]=ans[0 to 4][0 to 4], num[1]=ans[0 to 4][6 to 10], num[2]=ans[0 to 4][12 to 16], num[3]=ans[0 to 4][18 to 22]
    for(int i=0;i<5;i++)
    {
        strcpy(ans[i],space);
    }
    scanf("%d",&temp);
    num[0]=temp/1000;
    temp%=1000;
    num[1]=temp/100;
    temp%=100;
    num[2]=temp/10;
    temp%=10;
    num[3]=temp;
    //printf("%d %d %d %d\n",num[0],num[1],num[2],num[3]);
    for(int round=0;round<4;round++,start+=6,end+=6)
    {
        //------------------0-----------------------
        int level=0;;
        if(num[round]==1||num[round]==4)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
        if(num[round]==4)
        {
            become_star(ans,level,start,start);
        }
        //------------------1-----------------------
        level++;
        if((num[round]<5)||(num[round]>6))
        {
            become_star(ans,level,end,end);
        }
        if(num[round]<1||((num[round]>3)&&(num[round]!=7)))
        {
             become_star(ans,level,start,start);
        }
        //------------------2-----------------------
        level++;
        if(num[round]<2||num[round]==7)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
        if(num[round]==0)
        {
            become_star(ans,level,start,start);
        }
        //------------------3-----------------------
        level++;
        if(num[round]!=2)
        {
            become_star(ans,level,end,end);
        }
        if(num[round]%2==0&&num[round]!=4)
        {
            become_star(ans,level,start,start);
        }
        //------------------4-----------------------
        level++;
        if(num[round]%3==1||num[round]==9)
        {
            become_star(ans,level,end,end);
        }
        else
        {
            become_star(ans,level,start,end);
        }
    }
    for(int i=0;i<5;i++)
    {
    printf("%s\n",ans[i]);
    }
    return 0;
}
