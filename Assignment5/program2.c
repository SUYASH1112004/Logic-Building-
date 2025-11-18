#include<stdio.h>

int FindMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }

}


int main()
{
    int iNum1 = 0,iNum2 = 0, iRet = 0;
    printf("Enter the First Number :\n");
    scanf("%d",&iNum1);
    printf("Enter the Second Number :\n");
    scanf("%d",&iNum2);

    iRet=FindMax(iNum1,iNum2);
    printf("%d is the Greatest Number .",iRet);

    return 0;
}