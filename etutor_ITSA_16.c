#include<stdio.h>
#include<string.h>
int main()
{
    char A[8192],B[8192];
    scanf("%s%s",A,B);
    int length_A=strlen(A);
    int length_B=strlen(B);
    int ans=0;
    //printf("%d:%s\n%d:%s\n",length_A,A,length_B,B);
    for(int now_B=0; now_B<length_B; now_B++)
    {
        if(now_B+length_A>length_B)
        {
            break;
        }
        //printf("!");
        int flag=0;
        for(int now_A=0; now_A<length_A; now_A++)
        {
            if(A[now_A]==B[now_B+now_A])
            {
                flag++;
            }
        }
        if(flag==length_A)
        {
            ans++;
        }
        //printf("nowB:%d,f:%d\n",now_B,flag);
    }
    printf("%d\n",ans);
    return 0;
}
