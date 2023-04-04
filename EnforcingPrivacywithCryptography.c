/*
3.49 (Enforcing Privacy with Cryptography) The explosive growth of Internet communications and data storage on 
Internet-connected computers has greatly increased privacy concerns. The field of cryptography is concerned with
coding data to make it difficult (and hopefully—with the most advanced schemes—impossible) for unauthorized users to read.
In this exercise you’ll investigate a simple scheme for encrypting and decrypting data. 
A company that wants to send data over the Internet has asked you to write a program that will 
encrypt it so that it may be transmitted more securely. All the data is transmitted as four-digit integers. 
Your application should read a four-digit integer entered by the user and encrypt it as follows: 
Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10.
Then swap the first digit with the third, and swap the second digit with the fourth. Then print the encrypted integer.
Write a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption scheme) 
to form the original number. [Optional reading project: Research “public key cryptography” in general and the PGP (Pretty Good Privacy) 
specific public key scheme. You may also want to investigate the RSA scheme, which is widely used in industrial-strength applications.] */
#include <stdio.h>
int main()
{
    int digit1,digit2,digit3,digit4,num,i,temp,encrypted;
    printf("Enter a four digit integer: ");
    scanf("%d",&num);
    while (!(num>=1000&&num<=9999)){
            printf("Invalid number. Enter a four digit number: ");
            scanf("%d",&num);
    }
    temp=num;
    digit1=temp%10;
    temp=temp/10;
    digit2=temp%10;
    temp=temp/10;
    digit3=temp%10;
    digit4=temp/10;
    digit1=(digit1+7)%10;
    digit2=(digit2+7)%10;
    digit3=(digit3+7)%10;
    digit4=(digit4+7)%10;
    temp=digit1;
    digit1=digit3;
    digit3=temp;
    temp=digit2;
    digit2=digit4;
    digit4=temp;
    encrypted= digit1+digit2*10+digit3*100+digit4*1000;
    printf("Encrypted integer is %d",encrypted);
}
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page96 question 3.49 first program
