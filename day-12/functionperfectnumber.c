#include <stdio.h>
int Perfect(int num)
 {
    int sum = 0;
    for (int i=1;i<=num/2;i++)
     {
        if (num%i== 0)
         { 
            
        }
    }
    if (sum == num && num > 0) {
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
    if (Perfect(n) == 1)
     {
        printf("%d is a Perfect number.\n", n);
    }
     else
      {
        printf("%d is not a Perfect number.\n", n);
    }

    return 0;
}