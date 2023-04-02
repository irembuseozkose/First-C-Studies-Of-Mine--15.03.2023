#include <stdio.h>
int main(void)
{
    int num,i,a=2;
    printf("Enter the edge of the square");
    scanf("%d",&num);
    for (i=0;i<num;i++){
            printf("*");
        }
    printf("\n");
    while (a<num){

        printf("*");
        for(i=2;i<num;i++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        a++;
    }
     for (i=0;i<num;i++){
            printf("*");
        }
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page94 question 3.34
