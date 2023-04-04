/*3.41 (Multiples of 2 with an Infinite Loop) Write a program that keeps printing the multiples of 
the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e., you 
should create an infinite loop). What happens when you run this program? */

#include <stdio.h>
int main()
{
    int i;
    for(i=1;i>0;i++){
        printf("%d\n",2*i);
    }
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.41
