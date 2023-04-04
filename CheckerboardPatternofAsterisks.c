#include <stdio.h>
int main()
{
    int i,a;
    for(i=0;i<4;i++){
        for(a=0;a<8;a++){
            printf("*");
            printf(" ");
        }
        printf("\n");
        for(a=0;a<8;a++){
            printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.40
