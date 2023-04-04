/* 3.45 (Sides of a Right Triangle) Write a program that reads three nonzero integers 
and determines and prints if they could be the sides of a right triangle */
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 sides of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    while((a==0||b==0)||c==0){
        printf("A side of a triangle can not be 0. Enter the 3 sides of the triangle: ");
        scanf("%d%d%d",&a,&b,&c);
    }
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        printf("There can be a triangle with %d &d &d as sides.",a,b,c);
    }
    else {
        printf("There can't be a triangle with %d &d &d as sides.",a,b,c);
    }
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.45
