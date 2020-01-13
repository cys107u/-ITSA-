#include<stdio.h>
#include<string.h>
int is_Palindrome(char word[],int length)
{
    for(int i=0;i<(length)/2;i++)
    {
        if((word[i])!=word[length-i-1])
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    char word[8192];
    while(scanf("%s",word)!=EOF)
    {
        int length = strlen(word);
       //printf("%s L:%d, is_P:%d\n",word,length,is_Palindrome(word,length));

        if(is_Palindrome(word,length)==0)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");

    }
    return 0;
}
