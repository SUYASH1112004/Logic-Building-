#include<stdio.h>

int MultFact(int iNo)
{
    int ans  = 1;
    int mid = iNo/2;

    for(int i = 1;i<=mid;i++)
    {
        if(iNo%i==0)
        {
            ans*=i;
        }
    }
    return ans;
} 

int main()
{
    int iValue = 0;
    int iRet  = 0 ;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);
    return 0;
}