#include<stdio.h>

int FindLargest(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(a>b && a<c)
    {
        return c;
    }
    else if(b>a && b>c)
    {
        return b;
    }else if(b>a && b<c)
    {
        return c;
    }    
    else
    {
        return c;
    }
}


int main()
{
    int a,b,c,result;

    printf("Enter the numbers :\n");
    scanf("%d%d%d",&a,&b,&c);
    result = FindLargest(a,b,c);
    printf("%d is the largest number .",result);
    return 0;
}