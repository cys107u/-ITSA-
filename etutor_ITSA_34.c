#include<stdio.h>
void print_arr(int arr[],int total)
{
    for(int i=0; i<total; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    int h,g;
    double w;
    while(scanf("%d%d",&h,&g)!=EOF)
    {
        if(g==1)
        {
            w= (h-80)*0.7;
        }
        else if(g==2)
        {
            w= (h-70)*0.6;
        }
        printf("%.1f\n",w);
    }
    return 0;
}
