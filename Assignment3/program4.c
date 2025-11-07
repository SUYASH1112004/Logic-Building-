#include<stdio.h>

void DisplayConvert(int cValue)
{
    if((int)cValue>=97 && (int)cValue<=122)
    {
        int sol = (int)cValue-32;
        char ans = (char)sol;
        printf("%c",ans);
    }


}

int main()
{
    char cValue='\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}