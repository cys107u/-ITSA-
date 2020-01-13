#include <stdio.h>

int main()
{
    int year;
    while(scanf("%d",&year)!=EOF)
    {
        if( ( (year%4)==0 && (year%100)!=0 ) || (year%400) ==0) //(是4的倍數 且 不是100的倍數) 或是 (是400的倍數)
        {
            printf ("Bissextile Year\n",year);
        }
        else    //其他情況
        {
            printf ("Common Year\n");
        }
    }


    return 0;
}
