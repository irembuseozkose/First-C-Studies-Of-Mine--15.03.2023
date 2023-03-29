#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int smallest;
    int biggest;
  // or int num1,num2,num3,num4,num5,smallest,biggest;
    printf("Give us 5 nums:");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    biggest = num1;      //finding the biggest
    if (biggest<num2){
        biggest = num2;
    }
    if (biggest<num3){
        biggest = num3;
    }
    if (biggest<num4) {
        biggest = num4;
    }
    if (biggest<num5){
        biggest = num5;
    }
  
    smallest=num1;      // finding the smallest
    if (smallest>num2){
        smallest=num2;
    }
    if (smallest>num3){
        smallest = num3;
    }
    if (smallest>num4){
        smallest=num4;
    }
    if (smallest>num5){
        smallest=num5;
    }
    printf("Smallest=%d\nBiggest=%d\n",smallest,biggest);
    return 0;
}
