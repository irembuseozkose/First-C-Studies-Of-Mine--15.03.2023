/*3.47 (World Population Growth Calculator) Use the web to determine the current 
world population and the annual world population growth rate. Write an application 
that inputs these values, then displays the estimated world population after one, two, three, four and five years.*/
#include <stdio.h>
#include <math.h>
int main()
{
    float primaryPopulation,finalPopulation,interestRate,compoundedTimes=1,years;
    printf("Enter The Current Population: ");
    scanf("%f",&primaryPopulation);
    printf("Enter The growth rate: ");
    scanf("%f",&interestRate);
    for(years=1;years<=5;years++){
        finalPopulation= primaryPopulation*pow(1+interestRate/compoundedTimes,years*compoundedTimes);
        printf("The world's population will be %f in %f years.\n",finalPopulation,years);
    }
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page96 question 3.47
