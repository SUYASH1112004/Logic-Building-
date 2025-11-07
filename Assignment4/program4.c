#include<stdio.h>

int SumNonFact(int iNo)
{
    int ans = 0;

    for(int i= 1;i<iNo;i++)
    {
        if(iNo%i!=0)
        {
            ans+=i;
        }
    }

    return ans;


}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}