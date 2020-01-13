#include<stdio.h>
#include<stdlib.h>
void print_arr(int arr[],int total)
{
    for(int i=0;i<total;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int compare(const void *a, const void *b)
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return -1;}
      else if (c == d) {return 0;}
      else return 1;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N)
    {
        int T,m,k;
        scanf("%d%d%d",&T,&m,&k);
                int item[k];
        for(int i=0;i<k;i++)
        {
            scanf("%d",&item[i]);
        }

        qsort(item,k,sizeof(int),compare);
        int temp=0;
        for(int i=0;i<m;i++)
        {
            temp+=item[i];
        }
        if(temp<=T)
        {
            printf("%d\n",temp);
        }
        else
        {
            printf("Impossible\n");
        }
        N--;
    }
    return 0;
}
