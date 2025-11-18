#include<stdio.h>

void CheckNumberType(int iNum)
{
    if(iNum < 0)
    {
        printf("Number is Negative \n");
    }
    else if(iNum == 0)
    {
        printf("Number is Zero\n");
    }
    else
    {
        printf("Number is Positive\n");
    }
}

int main()
{

    int iValue = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    CheckNumberType(iValue);
    return 0;
}