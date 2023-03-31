#include <stdio.h>

int main( void )
 {
 float hours,rate,salary;
 printf("Enter # of hours worked (-1 to end): ");
 scanf("%f",&hours);
 while (hours!=-1.00){
    printf("Enter hourly rate of the worker in dollars: ");
    scanf("%f",&rate);
    if(hours>40) {
        salary= 40*rate + 1.5*rate*(hours-40);
    }
    else {
        salary= rate*hours;
    }
    printf("Salary is %f\n",salary);
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f",&hours);
    }
return 0;
 }
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page91 question 3.20
