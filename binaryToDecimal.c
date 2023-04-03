#include <stdio.h>
#include <math.h>

int main() {
    int num,result=0,digit=0,temp;
    printf("Enter a binary number: ");
    scanf("%d",&num);
    temp=num;
    while (num != 0) {
        digit++;
        num /= 10;
    }
    num=temp;
    for (digit;digit>0;digit--){
        result=result+(num%10)*pow(2,digit-1);
        num/=10;
    }
    printf("Decimal value of the number is %d",result);

    return 0;
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page94 question 3.36
