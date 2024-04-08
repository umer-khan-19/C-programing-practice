#include <stdio.h>

int main() {
    int r,n,temp,rev=0;
    temp=n;
    printf("Enter a number :");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if (temp==rev)
    {
        printf("This is a palindrome number");
    }
    else
    {
        printf("This is not a palindrome number");
    }
    
    return 0;
}