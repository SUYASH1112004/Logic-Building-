#include<stdio.h>

int FactDiff(int iNo)
{
    int fact = 0,nfact = 0;
    
    for(int i = 1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            fact+=i;
        }
        else
        {
            nfact+=i;
        }
    }

    int ans =0;
    ans = fact - nfact;
    return ans;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}