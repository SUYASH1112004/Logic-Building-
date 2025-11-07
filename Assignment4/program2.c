#include<stdio.h>

void FactRev(int iNo)
{
    int mid = 0;
    for(mid=iNo/2;mid>=1;mid--)
    {
        if(iNo%mid==0)
        {
            printf("%d\t",mid);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}