#include<stdio.h>
#include<conio.h>
int main()
{
    int n, reversedvalue=0,remainder,originalvalue;
    printf("Enter a value");
    scanf("%d",&n);
    originalvalue=n; 
    while(n!=0)
    {
       remainder = n%10;
        reversedvalue = reversedvalue*10+remainder;
        n/=10;
    }
    if (originalvalue==reversedvalue)
        printf("the number is a palindrome");
    else
        printf("the number is not a palindrome");
    return 0;
}