#include<stdio.h>
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int ans=0;
        for(int i=0;i<=num;i+=3)
        {
            ans+=i;
        }
        printf("%d\n",ans);
    }
    return 0;
}
