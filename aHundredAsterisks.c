/*Write a program that prints 100 asterisks, one at a time. After every tenth asterisk, 
your program should print a newline character. [Hint: Count from 1 to 100. Use the remainder 
operator to recognize each time the counter reaches a multiple of 10.] */

#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("*");
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.36
