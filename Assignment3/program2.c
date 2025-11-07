#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int mid  =  0;
    mid=iNo/2;
    for(i=1;i<=mid;i++)
    {
        if(iNo%i==0)
        {
            printf("%d\t",i);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}