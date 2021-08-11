#include <stdio.h>

// to find the n-th term of an Arithmetic Sequence.//
//an = a1 + (n-1)*d//

int main()
{
    int n;
    float a1;
    float d;
    
    printf("Enter the initial term (a1):");
    scanf("%f", &a1);
    printf("Enter the difference in the sequence:");
    scanf("%f", &d);
    printf("Insert the number of elements in the sequence:");
    scanf("%d", &n);
    printf("The nth term of the Arithmetic sequence = %f\n", a1 + (n - 1)*d);
    return (0);
}
