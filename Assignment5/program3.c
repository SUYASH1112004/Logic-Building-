#include<stdio.h>

void CheckLeapYear(int years)
{
    if(years%4==0  && years%100 != 0)
    {
        printf("%d is a Leap Year .\n",years);
    }
    else
    {
        printf("%d is not a Leap Year .\n",years);
    }

}

int main()
{
    int years=0;
    printf("Enter the year :\n");
    scanf("%d",&years);

    CheckLeapYear(years);

    return 0;
}