#include <stdio.h>

int main(void) {
    int a = 5, b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("Predecrementing:\n");
    printf("a= %d\n", --a); // it decrements a first then prints its value
    printf("b= %d\n", --b); // it decrements b first then prints its value
    a = 5;
    b = 5;
    printf("Postdecrementing:\n");
    printf("a= %d\n", a--); // it prints a firt, then decrements its value
    printf("b= %d\n", b--); // first print b, then decrements its value

    printf("Results: a= %d, b= %d\n", a, b);

    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page91 question 3.22
