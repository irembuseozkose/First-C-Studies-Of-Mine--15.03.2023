/* 3.46 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) 
and is defined as follows: n! = n • (n - 1) • (n - 2) • … • 1 (for values of n greater than or equal to 1) 
and n! = 1 (for n = 0). For example, 5! = 5 • 4 • 3 • 2 • 1, which is 120.
a) Write a program that reads a nonnegative integer and computes and prints its factorial. */
#include <stdio.h>
int main()
{
    int factorial,result=1,temp;
    printf("Enter a positive factorial number without the'!': ");
    scanf("%d",&factorial);
    while(factorial<0){
        printf("Enter a POSITIVE factorial number without the'!': ");
        scanf("%d",&factorial);
    }
    temp=factorial;
    for (factorial;factorial>0;factorial--){
        result=result*factorial;
    }
    printf("%d! equals %d",temp,result);
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.46 - a
