#include<stdio.h>
#include<string.h>
void print_arr(int arr[],int total)
{
    for(int i=0; i<total; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    char zodiac[12][12]= {"Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Sagittarius","Capricorn"};
    int start[12] = { 21,19, 21, 21, 22, 22, 23, 23, 23, 24, 23, 22};
    int month,day;
    scanf("%d%d",&month,&day);
    if(day<start[month-1])
    {
        if(month==1)
        {
            month=13;
        }
        printf("%s\n",zodiac[month-2]);
    }
    else
    {
        printf("%s\n",zodiac[month-1]);
    }

    return 0;
}
