#include<stdio.h>
#include<math.h>


void inverse(int ans[])
{
    for(int i=0;i<8;i++)
    {
        ans[i]=(ans[i]+1)%2;
    }
    for(int j=7;j>=0;j--)
    {
        if(ans[j]==0)
        {
            ans[j]=1;
            for(int k=j+1;k<8;k++)
            {
                 ans[k]=0;
            }
        }
    }
}


int main()
{
    int num, ans[8], mod, ans_now,inverse_flag;
    while(scanf("%d",&num)!=EOF)
    {
        inverse_flag=0;
        if(num==0)
        {
            printf("00000000\n");
            continue;
        }
        else if(num==-128)
        {
            printf("10000000\n");
            continue;
        }
        if(num<0)
        {
            num*=-1;
            inverse_flag=1;
        }
        ans[0]=0;
        for( int level=1;level<=7;level++)
        {
            ans_now=8-level;
            int x=pow(2,level);
            mod=(num%x);
            if(mod==0)
            {
                ans[ans_now]=0;
            }
            else
            {
                ans[ans_now]=1;
                num-=mod;
            }
        }
        if(inverse_flag)
        {
            inverse(ans);
        }
        for(int i=0;i<8;i++)
        {
            printf("%d",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
