/* 3.42 (Diameter, Circumference and Area of a Cirle) 
Write a program that reads the radius of a circle (as a float value) and computes and prints the diameter, 
the circumference and the area. Use the value 3.14159 for π. */
#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("Diameter of the circle is %f\n",2*radius);
    printf("Circumference of the circle is %f\n",2*radius*3.14159);
    printf("Area of the circle is %f\n",radius*radius*3.14159);
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page95 question 3.42
