/* 3.44 (Sides of a Triangle) Write a program that reads three nonzero float values 
and determines and prints if they could represent the sides of a triangle */
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
    printf("Sides of the triangle are\n%d\n%d\n%d",a,b,c);
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.43
