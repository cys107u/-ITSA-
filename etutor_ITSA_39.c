#include<stdio.h>
void print_arr(int arr[],int total)
{
    for(int i=0;i<total;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    int N;
    scanf("%d",&N);
    for(int round=0;round<N;round++)
    {
        int point[3],total=0,more_than_sixty=0;
        for(int i=0;i<3;i++)
        {
            scanf("%d",&point[i]);
            total+=point[i];
            if(point[i]>=60)
            {
                more_than_sixty++;
            }
        }
        if(more_than_sixty==3||total>=220)
        {
            printf("P\n");
        }
        else if(more_than_sixty==2&&total<220)
        {
                printf("M\n");
        }
        else if(more_than_sixty==1)
        {
            if(point[0]>=80||point[1]>=80||point[2]>=80)
            {
                printf("M\n");
            }
            else
        {
            printf("F\n");
        }
        }
        else
        {
            printf("F\n");
        }

    }
    return 0;
}
