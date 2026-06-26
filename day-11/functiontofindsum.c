#include <stdio.h>
int Sum(int n1, int n2) 
{
    int result;
    result = n1 + n2;
    return result;
}
int main()
 {
    int n1,n2,total;
    printf("Enter n1 and n2: ");
    scanf("%d%d",&n1,&n2);

    total = Sum(n1, n2);

    printf("The sum of %d and %d is: %d\n", n1,n2,total);

    return 0;
}