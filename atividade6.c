#include <stdio.h>

int main()
{
    int daysInWeek;
    double pi;
    
    printf("Plese, write a integer number from a count of the days in one week: ");
    scanf("%d", &daysInWeek);
    printf("Plese, write the pi number in double value: ");
    scanf("%lf", &pi);
    
    printf("How many days in the week: %d \n", daysInWeek);
    printf("The value of Pi to two points: %.2lf \n", pi);
    printf("There are %d days in the week. \n", daysInWeek);
    printf("Pu values is: %lf \n", pi);
	  return 0;
}
