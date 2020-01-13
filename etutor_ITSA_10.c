#include<stdio.h>

int gcd(int x,int y)
{
    if((x%y)==0)
    {
        return y;
    }
    x=x%y;
    return gcd(y,x);
}
int main()
{
    int x,y,ans;
    scanf("%d%d",&x,&y);

    ans=gcd(x,y);
    printf("%d\n",ans);
    return 0;
}
