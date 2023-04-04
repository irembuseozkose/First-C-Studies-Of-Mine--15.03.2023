//3.39 (Counting 7s) Write a program that reads an integer and determines and prints how many digits in the integer are 7s
#include <stdio.h>
int main()
{
    long num;
    int amount=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num>=1){
        if (num%10 == 7)
        {
            amount++;
        }
        num=num/10;
    }
    printf("There are %d 7s in the number.",amount);
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.39
