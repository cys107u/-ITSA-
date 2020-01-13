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
    int kWh_stand[5]= {0,120,330,500,700};
    double summer[5]= {2.10, 3.02, 4.39, 4.97, 5.63 };
    double non_summer[5]= {2.10, 2.68, 3.61, 4.01, 4.50 };
    int kWh,temp;
    double summer_total=0,non_summer_total=0;
    scanf("%d",&kWh);
    for(int i=4;kWh>0;i--)
    {
        if(kWh>kWh_stand[i])
        {
            temp=kWh-kWh_stand[i];
            summer_total+=temp*summer[i];
            non_summer_total+=temp*non_summer[i];
            kWh-=temp;
        }
    }
    printf("Summer months:%.2f\n",summer_total);
    printf("Non-Summer months:%.2f\n",non_summer_total);

return 0;
}
