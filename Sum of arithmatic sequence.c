#include <stdio.h>

int main()
{
    float a1;
    float an;
    int total_term;
    float   sum;

    printf("Please enter the total term of the sequence: ");
    scanf("%d", &total_term);
    printf("\n");
    printf("Please enter the initial term of the sequence: ");
    scanf("%f", &a1);
    printf("\n");
    printf("Please enter the last term of the sequence: ");
    scanf("%f", &an);
    printf("\n");

    sum = (a1 + an) * total_term / 2;
    printf("The sum of the sequence is: %f\n", sum);

    return (0);

}
