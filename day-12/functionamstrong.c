#include <stdio.h>
int Armstrong(int num) {
    int n1=num;    
    int sum=0;           
    int remainder;
    while (num>0) 
    {
        remainder = num % 10;                     
        sum = sum + (remainder * remainder * remainder); 
        num = num / 10;                              
    }
    if (n1==sum)
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
    if (Armstrong(n) == 1) 
    {
        printf("%d is an Armstrong number.\n", n);
    } 
    else
     {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}