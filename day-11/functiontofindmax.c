#include <stdio.h>
int maximum(int n1, int n2)
 {
  int maximum;
    if (n1>n2)
     {
        maximum=n1;
    }
     else 
    {
        maximum=n2;
    }
    
    return maximum;
}

int main() 
{
    int largest,n1,n2;
printf("Enter two numbers: ");
scanf("%d%d",&n1,&n2);
largest=maximum(n1,n2);
    printf("The maximum number between %d and %d is: %d\n",n1,n2,largest);

    return 0;
}