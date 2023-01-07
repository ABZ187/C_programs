// Check weather a number is pallindrome or not

#include <stdio.h>
void main()
{
    int n, m,k;
    printf("\nEnter a number. ");
    scanf("%d",&n);
    k=n;
    for (m = 0;n != 0;)
    {
        m = m * 10 +n % 10;
        n =n / 10;
    }
    printf("%d", m-n);

    if (m==k){
        printf("\nPalindrome");
    }
    else{
        printf("\nnot Palindrome");

    }
}