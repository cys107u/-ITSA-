#include<stdio.h>
int main()
{
    int mi=0;
    double km=0;
    while(scanf("%d",&mi)!=EOF)
    {
        km=mi*(1.6);
        printf("%.1f\n",km);
    }
    return 0;
}
