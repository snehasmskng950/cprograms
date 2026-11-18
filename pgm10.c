#include<stdio.h>
int main(void)
{
    int n,original,digit,revers=0;
    printf("Enter a positive integer:");
    scanf("%d", &n);
    if(n<0){
        printf("Negative number is not considered a palindromehere.\n");
        return 0;
    }
    original=n;
    while(n!=0){
        digit=n%10;
        revers=revers*10+digit;
        n=n/10;
    }
    if(original==revers)
    printf("%is a pallindrome.\n", original);
    return 0;
}