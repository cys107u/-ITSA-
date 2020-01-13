#include<stdio.h>
int is_tie(int grath[3][3])
{
    int flag=0;
    for(int row=0;row<3;row++)
    {
        flag=0;
        for(int col=0;col<3;col++)
        {
            flag+=grath[row][col];
        }
        if(flag==0||flag==3)
        {
            return 0;
        }
    }
    for(int col=0;col<3;col++)
    {
        flag=0;
        for(int row=0;row<3;row++)
        {
            flag+=grath[row][col];
        }
        if(flag==0||flag==3)
        {
            return 0;
        }
    }
            flag=0;
    for(int i=0;i<3;i++)
    {
            flag+=grath[i][i];
    }
    if(flag==0||flag==3)
        {
            return 0;
        }
                flag=0;
    for(int i=0;i<3;i++)
    {

        flag+=grath[i][2-i];
    }
    if(flag==0||flag==3)
        {
            return 0;
        }
        return 1;
}

int main()
{
    int grath[3][3];
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            scanf("%d",&grath[row][col]);
        }
    }
    if(is_tie(grath))
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    return 0;
}
