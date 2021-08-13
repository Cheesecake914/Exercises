#include <stdio.h>

int main()
{
   int grade;
   do {
    printf("Please enter a valid grade between 0 to 100: ");
    scanf("%d", &grade);
   }
   while (grade < 0 || grade > 100);
   printf("You have entered a correct grade!\n");
    return (0);

}
