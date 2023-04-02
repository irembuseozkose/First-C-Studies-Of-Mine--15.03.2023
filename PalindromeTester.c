#include <stdio.h>

int main() {
    int num, first, last, second, fourth;

    printf("Enter a five digit number: ");
    scanf("%d", &num);
    while (!(num>=10000&&num<=99999)){
            printf("Invalid answer. Enter a FIVE DIGIT number: ");
            scanf("%d", &num);
    }

    first = num / 10000;
    last = num % 10;
    second = (num / 1000) % 10;
    fourth = (num / 10) % 10;

    if (first == last && second == fourth) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page94 question 3.35
