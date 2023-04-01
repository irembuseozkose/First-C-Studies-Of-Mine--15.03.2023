// pseudocode program

//SET largest to 0
//SET count to 0
//WHILE count < 10 DO
//    INPUT number
//    IF number > largest THEN
//        SET largest to number
//    END IF
//    increment count
//END WHILE
//PRINT "The largest number is: ", largest
#include <stdio.h>
int main() {
    int count = 0;
    int number;
    int largest = 0;

    while (count < 10) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > largest) {
            largest = number;
        }

        count++;
    }

    printf("The largest number is: %d", largest);

    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page91 question 3.24
