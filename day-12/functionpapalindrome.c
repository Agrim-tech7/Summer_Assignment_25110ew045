#include <stdio.h>
int Palindrome(int num) 
{
    int n1=num;    
    int reverse=0;  
    int remainder;
    while(num>0)
     {
        remainder=num%10;                     
        reverse=(reverse*10)+remainder;
        num = num / 10;                           
    }
    if (n1==reverse)
     {
        return 1; 
    }
     else
     {
        return 0; 
    }
}
int main()
 {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (Palindrome(n) == 1) 
    {
        printf("%d is a palindrome number.\n", n);
    }
     else
      {
        printf("%d is not a palindrome number.\n", n);
    }

    return 0;
}