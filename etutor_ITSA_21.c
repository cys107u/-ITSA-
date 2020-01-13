#include<stdio.h>
int main()
{
    float min=1e9;
    float max=-1e8;
    float tmp;
    for(int i=0;i<10;i++)
    {
        scanf("%f",&tmp);
        if(tmp>max)
        {
            max=tmp;
        }
        if(tmp<min)
        {
            min=tmp;
        }
    }
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
    return 0;
}
