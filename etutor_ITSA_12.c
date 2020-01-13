#include<stdio.h>

int function(int x)
{
    if(x==0||x==1)
    {
        return x+1;
    }
    else
        return function(x-1)+function(x/2);
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",function(x));
    return 0;
}
