#include <stdio.h>

int main()
{
    int b,largest=0,second=0,number;
    for(b=0;b<10;b++){
        printf("Enter a number: ");
        scanf("%d",&number);
        if(number>largest){
            second=largest;
            largest= number;
        }
        else if (number>second){
            second =number;
        }

    }
    printf("Largest: %d\nSecond Largest= %d",largest,second);
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page92 question 3.27
