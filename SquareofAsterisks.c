#include <stdio.h>
int main(void)
{
    int num,i,a=0;
    printf("Enter the edge of the square");
    scanf("%d",&num);
    while (a<num){
        for (i=0;i<num;i++){
            printf("*");
        }
        printf("\n");
        a++;
    }
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page94 question 3.33
