/*
3.48 (Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see that your heart rate stays within 
a safe range suggested by your trainers and doctors. According to the American Heart Association (AHA) 
(www.americanheart.org/presenter.jhtml?identifier=4736), the formula for calculating your maximum heart 
rate in beats per minute is 220 minus your age in years. Your target heart rate is a range that is 50–85% of your maximum heart rate.
[Note: These formulas are estimates provided by the AHA. Maximum and target heart rates may vary based on the health, fitness and gender of the individual. 
Always consult a physician or qualified health care professional before beginning or modifying an exercise program.] 
Create a program that reads the user’s birthday and the current day (each consisting of the month, day and year). 
Your program should calculate and display the person’s age (in years), the person’s maximum heart rate and the person’s target heart rate range.
*/
#include <stdio.h>
#include <time.h>
int main()
{
    int dayB,mounthB,yearB,dayC,mounthC,yearC,age;
    float max;
    printf("Enter your birthday in MM DD YYYY: ");
    scanf("%d%d%d",&mounthB,&dayB,&yearB);
    printf("Enter the current day in MM DD YYYY : ");
    scanf("%d%d%d",&mounthC,&dayC,&yearC);
    time_t t = time(NULL);
    struct tm current = *localtime(&t);
    yearC = current.tm_year + 1900;
    mounthC = current.tm_mon + 1;
    dayC = current.tm_mday;
    age = yearC - yearB;
    if ( mounthC < mounthB || (mounthC == mounthB && mounthC < mounthB)) {
        age--;
    }
    max = 220 - age;
    printf(" A person at the age of %d should have these rates:\n Maximum heart rate:%f \n Target heart rate range: %f-%f",age,max,max*0.5,max*0.75);
}

// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page96 question 3.48 
