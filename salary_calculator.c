#include <stdio.h>

int main( void )
 {
 float sales,salary;
 printf("Enter sales as dollars(-1 to exit):");
 scanf("%f",&sales);
 while (sales!=-1.0){
    salary= 200 + sales*0.09;
    printf("Salary is: %f\n",salary);
    printf("Enter sales as dollars(-1 to exit)");
    scanf("%f",&sales);
 }
 }
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel page chapter3 page90 question 3.19
