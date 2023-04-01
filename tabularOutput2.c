#include <stdio.h>
int main()
{
    int A;
    printf("A A+2 A+4 A+6\n");
    for (A=3;A<=15;A+=3){
        printf("%d %d %d %d\n",A, A+2, A+4, A+6);
    }
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page92 question 3.26
