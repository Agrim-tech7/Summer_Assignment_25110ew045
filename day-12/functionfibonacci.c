#include <stdio.h>
void printFibonacci(int terms) 
{
    int n1 = 0; 
    int n2 = 1; 
    int nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= terms; i++) 
    {
        printf("%d ", n1); 
        nextTerm = n1 + n2; 
        n1 = n2;            
        n2 = nextTerm;      
    }
    printf("\n");
}
int main()
 {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
     if (n<=0)
     {
        printf("Please enter a positive integer.\n");
    }
     else
     {
        
        printFibonacci(n);
    }

    return 0;
}