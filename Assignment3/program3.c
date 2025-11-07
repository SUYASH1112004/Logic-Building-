#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int i =0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    int mid = 0;
    mid=iNo/2;
    for(i=1;i<=mid;i++)
    {
        if(i%2==0 && iNo%i==0)
        {
            printf("%d\t",i);
        }
    }

}


int main()
{
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    DisplayEvenFactors(iValue);
    return 0;
}