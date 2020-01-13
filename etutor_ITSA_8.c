#include<stdio.h>

int is_prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(i*i==x)
        {
            return 1;
        }
        for(int j=1; i*j<=x; j++)
        {
            if(x==j*i)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        if(is_prime(num))
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
    return 0;
}
