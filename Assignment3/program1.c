#include<stdio.h>

void printEvent(int iNo)
{
    if(iNo<=0)
    {
        return;
    }

    for(int iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    printEvent(iValue);
    return 0;
}