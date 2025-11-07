//Program to divide number 
#include<stdio.h>

double divide(int num1,int num2)
{
    int ans= 0;

    if(num2 == 0)
    {
        return -1;
    }

    ans= num1/num2;

    return ans;

}

int main()
{
    int iRet = 0;
    int iValue1 = 15,iValue2=5;

    iRet = divide(iValue1,iValue2);

    printf("Division is %d",iRet);

    return 0;
}