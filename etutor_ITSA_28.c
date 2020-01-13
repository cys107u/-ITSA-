#include<stdio.h>
void print_arr(int arr[],int total)
{
    for(int i=0;i<total;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void print_ans(int arr[],int total)
{
    for(int i=0;i<total;i++)
    {
        if(i!=0)
            printf(" ");
        printf("%d",arr[i]);
    }
    printf("\n");
}
void separate(int x,int arr[],int total)
{
    int k=1;
    for(int i=0;i<total-1;i++)
    {
        k*=10;
    }
    for(int i=0;i<total;i++)
    {
        arr[i]=x/k;
        if(i!=total-1)
        {
            x-=arr[i]*k;
            k/=10;
        }
    }
    return ;
}
void initialize_arr(int arr[],int total,int x)
{
    for(int i=0;i<total;i++)
        {
            arr[i]=x;
        }
}

int main()
{
    int special_price[8],other_price[3][8],temp,get_price[7],total_money=0;
    initialize_arr(get_price,7,0);
    scanf("%d",&temp);
    separate(temp,special_price,8);
    for(int i=0;i<3;i++)
    {
        scanf("%d",&temp);
        separate(temp,other_price[i],8);
    }
    int round;
    scanf("%d",&round);
    for(int r=0;r<round;r++)
    {
        int temp_j=5, temp_price=0;
        int my_receipt[8];
        scanf("%d",&temp);
        separate(temp,my_receipt,8);
        for(int i=0;i<8;i++)
        {
            if(my_receipt[i]!=special_price[i])
            {
                break;
            }
            if(i==7)
            {
                get_price[0]++;
                temp_price=2000000;
            }
        }
        if(temp_price==2000000)
        {
            total_money+=temp_price;
            continue;
        }
        for(int i=0;i<3;i++)
        {
            int j=0;
            for(j=7;j>=0;j--)
            {
                if(my_receipt[j]!=other_price[i][j])
                {
                    break;
                }
            }
            //printf("\n!%d:%d!\n",r,j);
            if(j>=temp_j)
            {
                continue;
            }
            temp_j=j;
            if(j<0)
            {
                temp_price=200000;
            }
            else if(j==0)
            {
                temp_price=40000;
            }
            else if(j==1)
            {
                temp_price=10000;
            }
            else if(j==2)
            {
                temp_price=4000;
            }
            else if(j==3)
            {
                temp_price=1000;
            }
            else if(j==4)
            {
                temp_price=200;
            }
        }
        total_money+=temp_price;
        get_price[temp_j+2]++;
        //printf("total:%d\n",total_money);
    }
    print_ans(get_price,7);
    printf("%d\n",total_money);
    return 0;
}
