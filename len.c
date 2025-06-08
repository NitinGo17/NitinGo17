#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char str1[20];
    printf("Enter any character- ");
    scanf("%s",&str1);
    a=strlen(str1);
    printf("The size of the character is %d",a);
    return 0;
}