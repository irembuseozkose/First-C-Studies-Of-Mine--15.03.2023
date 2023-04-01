 /*3.28 (Validating User Input) Modify the program in Figure 3.10 to validate its inputs.
On any input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.*/
#include <stdio.h>

 int main( void )
 {
     int passes = 0;
     int failures = 0;
     int student = 1;
     int result;

     while ( student <= 10 ) {
            printf( "Enter result ( 1=pass,2=fail ): " );
            scanf( "%d", &result );
            while (!(result==1) && !(result==2)) {
                    printf( "That result was invalid. Enter a valid result ( 1=pass,2=fail ): " );
                    scanf( "%d", &result );
            }

            if (result==1){
                passes = passes + 1;
            }
            else {
                failures = failures + 1;
            }
            student = student + 1;
     }



     printf( "Passed %d\n", passes );
     printf( "Failed %d\n", failures );
     if ( passes > 8 ) {
             printf( "Bonus to instructor!\n" );
     }

     return 0;

 }
// Homework for the Introduction to Computer Programming lesson
//C: How to Program by Paul and Harvey Deitel chapter3 page92 question 3.28
