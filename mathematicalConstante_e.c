/* 3.46 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) 
and is defined as follows: n! = n • (n - 1) • (n - 2) • … • 1 (for values of n greater than or equal to 1) 
and n! = 1 (for n = 0). For example, 5! = 5 • 4 • 3 • 2 • 1, which is 120.
b) Write a program that estimates the value of the mathematical constant e by using the formula 
e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! */

#include <stdio.h>
int main()
{
    int n,temp,factorial=1;
    float result=1.0;
    printf("Enter a positive factorial number without the'!': ");
    scanf("%d",&n);
    while(n<0){
        printf("Enter a POSITIVE factorial number without the'!': ");
        scanf("%d",&n);
    }
    temp=n;

    for (n;n>0;n--){
        factorial=factorial*n;
        result= result+ 1.0/factorial;
    }
    printf("e is %f",result);
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.46 - b
