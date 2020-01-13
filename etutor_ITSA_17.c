#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int no_repeat(char ans[1000][1000],char word[1000],int total)
{
    for(int i=0; i<total; i++)
    {
        if(strcmp(ans[i],word)==0)
        {
            return 0;
        }
    }
    return 1;
}

void be_lower_case(char word[1000],int length)
{
    for(int i=0; i<length; i++)
    {
        if(word[i]>=65&&word[i]<=90)
        {
            word[i]=word[i]+32;
        }
    }
}
int main()
{
    char temp_word[1000], ans[1000][1000];
    int i=0;
    while(scanf("%s",temp_word)!=EOF)
    {
        int length_tmp=strlen(temp_word);
        be_lower_case(temp_word,length_tmp);
        if(no_repeat(ans,temp_word,i))
        {
            strcpy(ans[i],temp_word);
            i++;
        }
    }
    for(int j=0; j<i; j++)
    {
        if(j!=0)
        {
            printf(" ");
        }
        printf("%s",ans[j]);
    }
    printf("\n");
    return 0;
}
