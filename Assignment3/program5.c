#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cVal)
{
    if(cVal=='a'||cVal=='e'||cVal=='i'||cVal=='o'||cVal=='u')
    {
        return TRUE;
    }   
    else
    {
        return FALSE;
    }
} 


int main()
{

    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet==1)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not a vowel");
    }


    return 0;
}