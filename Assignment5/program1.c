#include<stdio.h>

void CheckEvenOdd(int iNum)
{
    if(iNum%2==0)
    {
        printf("%d is Even Number .\n",iNum);
    }
    else
    {
        printf("%d is Odd Number .\n",iNum);
    }

}

int main()
{
    int iNumber = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNumber);
    CheckEvenOdd(iNumber);


    return 0;
}