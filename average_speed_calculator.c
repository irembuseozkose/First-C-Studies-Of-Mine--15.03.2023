#include <stdio.h>
int main(void)
{
    float gallons,miles,totalGallons=0.0,totalMiles=0.0,average;
    printf("Enter the gallons used(-1 to end):");
    scanf("%f",&gallons);

    while (gallons!=-1.0){
        printf("Enter miles driven");
        scanf("%f",&miles);
        totalGallons = totalGallons + gallons;
        totalMiles=totalMiles + miles;
        printf("The miles / gallon for this tank was %f\n",miles/gallons);
        printf("Enter the gallons used(-1 to end):");
        scanf("%f",&gallons);

    }
    average= totalMiles/totalGallons;
    printf("The overall avarage miles/gallons was %f",average);
    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page89 question 3.17
