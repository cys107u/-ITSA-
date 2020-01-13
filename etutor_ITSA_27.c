#include<stdio.h>
void print_arr(int arr[4])
{
    for(int i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void print_ans(int A,int B)
{
    printf("%dA%dB\n",A,B);
}
void separate(int x,int arr[4])
{
    arr[0]=x/1000;
    x-=arr[0]*1000;
    arr[1]=x/100;
    x-=arr[1]*100;
    arr[2]=x/10;
    x-=arr[2]*10;
    arr[3]=x/1;
    return;
}

int main()
{
    int sample[4],temp,B_arr[10];
    scanf("%d",&temp);
    //printf("%d\n",temp_sample);
    separate(temp,sample);
    //print_arr(sample);
    for(int i=0;i<10;i++)
    {
        B_arr[i]=0;
    }
    for(int i=0;i<4;i++)
    {
        B_arr[sample[i]]=1;
    }
    while(1)
    {
        int A=0,B=0,compare[4];
        scanf("%d",&temp);
        if(temp==0)
        {
            break;
        }
        separate(temp,compare);
        //print_arr(compare);

        for(int i=0;i<4;i++)
        {
            if(sample[i]==compare[i])
            {
                A++;
            }
            if(B_arr[compare[i]])
            {
                B++;
            }
        }
        B-=A;
        print_ans(A,B);
    }
    return 0;
}
