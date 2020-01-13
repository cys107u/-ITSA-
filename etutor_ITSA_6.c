#include<stdio.h>
int main()
{
    int month;
    while(scanf("%d",&month)!=EOF)
    {
        if(month/3==1)
        {
            printf("Spring\n");
        }
        else if(month/3==2)
        {
            printf("Summer\n");
        }
        else if(month/3==3)
        {
            printf("Autumn\n");
        }
        else
        {
            printf("Winter\n");
        }
    }
    return 0;
}
