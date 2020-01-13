#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    //printf("%s",str);
    int num_word=0;
    int letter[26];
    for(int i=0; i<26; i++)
    {
        letter[i]=0;
    }
    while(scanf("%s",str)!=EOF)
    {
        num_word++;
        int length=strlen(str);
        for(int i=0;i<length; i++)
        {
            if(str[i]<=90&&str[i]>=65)
            {
                int temp=str[i]-65;
                letter[temp]++;
            }
            else if(str[i]<=122&&str[i]>=97)
            {
                int temp=str[i]-97;
                letter[temp]++;
            }
        }
    }
    printf("%d\n",num_word);
    for(int i=0; i<26; i++)
    {
        if(letter[i])
        {
            printf("%c : %d\n",i+97,letter[i]);
        }
    }
    return 0;
}
