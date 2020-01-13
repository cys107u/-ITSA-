#include<stdio.h>

void print_arr(int b,int n,int arr[])
{
    for(int i=b;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void car_time_update(int s, int d, int time[25])
{
    for(int i=s;i<d;i++)
    {
        time[i]=1;
    }
}
int need_to_add(int s,int d,int total_car,int car_work_time[31][25])
{
    int can_work[total_car+1];
    for(int i=1;i<=total_car;i++)
    {
        can_work[i]=1;
    }
    for(int i=1;i<=total_car;i++)
    {
        for(int j=s;j<d;j++)
        {
            if(car_work_time[i][j]==1)
            {
                can_work[i]=0;
            }
        }
    }
    for(int i=1;i<=total_car;i++)
    {
        if(can_work[i])
        {
            return i;
        }
    }
    return 0;
}



int main()
{
    int n, total_car=1;
    scanf("%d",&n);
    int s[n],d[n],car_work_time[31][25];
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&s[i],&d[i]);
    }
    for(int i=0;i<31;i++)
    {
        for(int j=0;j<25;j++)
        {
            car_work_time[i][j]=0;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(s[j]>s[j+1])
            {
                swap(&s[j],&s[j+1]);
                swap(&d[j],&d[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {

        int choose_car=need_to_add(s[i],d[i],total_car,car_work_time);
                        //printf("%d\n",choose_car);
        if(choose_car>0)
        {
            car_time_update(s[i],d[i],car_work_time[choose_car]);
        }
        else
        {
            total_car++;
            choose_car=total_car;
            car_time_update(s[i],d[i],car_work_time[choose_car]);
        }
        //printf("%d:\n",choose_car);
        //print_arr(1,25,car_work_time[choose_car]);
    }
    printf("%d\n",total_car);
    return 0;
}
