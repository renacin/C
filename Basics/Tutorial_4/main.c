// Name:                                            Renacin Matadeen
// Date:                                               03/27/2022
// Title                                        Learning C/C++: Tutorial #4
//
// ----------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ----------------------------------------------------------------------------------------------------------------------

// Define Custom Function
float which_max_num(float num1, float num2)
{

    // Define Variables
    float larger_num, smaller_num;


     // Which Number Is Larger?
    if(num1 > num2){
        larger_num = num1;
        smaller_num = num2;

        // Results Of Completing Statement
        printf("Answer: %.2f, > Than %.2f", larger_num, smaller_num);
    }

    else if(num1 == num2){
        // Results Of Completing Statement
        printf("Answer: %.2f, Is Equal To %.2f", num1, num2);
    }

    else {
        larger_num = num2;
        smaller_num = num1;

        // Results Of Completing Statement
        printf("Answer: %.2f, < Than %.2f", larger_num, smaller_num);
    }
}


// ----------------------------------------------------------------------------------------------------------------------

// Main Logic Of Code
int main()
{

    // Define Needed Variables
    float num_1, num_2;

    // Main Code
    printf("Num Comparison Bot");
    printf("\nNumber 1: ");
    scanf("%f", &num_1);
    printf("Number 2: ");
    scanf("%f", &num_2);

    which_max_num(num_1, num_2);

    return 0;
}

// ----------------------------------------------------------------------------------------------------------------------

/*
Notes:
    Basic Functions:
        -


    General Syntax Of A Function:
        -


Resources:
    + https://www.tutorialspoint.com/cprogramming/c_functions.htm
    + https://www.section.io/engineering-education/history-of-c-programming-language/
    + https://www.youtube.com/watch?v=87SH2Cn0s9A
*/
