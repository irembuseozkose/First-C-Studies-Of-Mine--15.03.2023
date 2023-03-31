#include <stdio.h>

int main( void )
 {
 float accountnum,totalCharges,totalCredits,creditLimit,firstBalance,balance;
 printf("Enter account number(-1 to end):");
 scanf("%f",&accountnum);
 while (accountnum!= -1.0) {
    printf("Enter beginning balance:");
    scanf("%f",&firstBalance);
    printf("Enter total charges:");
    scanf("%f",&totalCharges);
    printf("Enter totalCredits");
    scanf("%f",&totalCredits);
    printf("Enter credit limit:");
    scanf("%f",&creditLimit);
    balance= firstBalance+totalCharges-totalCredits;
    if(balance>creditLimit){
        printf("Credit limit exceeded\n");

    }
    printf("Enter account number(-1 to end):");
    scanf("%f",&accountnum);
 }
 }
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel page chapter3 page89 question 3.18
