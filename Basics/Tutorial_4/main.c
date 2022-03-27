// Name:                                            Renacin Matadeen
// Date:                                               03/27/2022
// Title                                        Learning C/C++: Tutorial #4
//
// ----------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
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
    bool exit_cond = true;
    char cont_val[1];
    float num_1, num_2;

    // Greet User
    printf("Num Comparison Bot");
    printf("\nThis Application Will Indicate Which Number Is Bigger");

    // Entry Point For Main Loop Of Code
    while (exit_cond) {

        // Ask User For Input
        printf("\n\nNumber 1: ");
        scanf("%f", &num_1);
        printf("Number 2: ");
        scanf("%f", &num_2);

        // Compare Numbers
        which_max_num(num_1, num_2);

        // Ask User If They Would Like To Continue
        printf("\n\nContinue [Y/N]: ");
        scanf("%s", &cont_val);

        if (strcmp(cont_val, "Y") == 0){
            printf("\n Cleaning Values");
        }

        else if (strcmp(cont_val, "N") == 0) {
            exit_cond = false;
        }

        else {
            printf("\nInvalid Response, restarting app");
            exit_cond = false;

        }
    }

    // Thank User For Using Script
    printf("\nThank You For Using This Script!");










    return 0;
}

// ----------------------------------------------------------------------------------------------------------------------

/*
Notes:
    Basics Of Loops:
        - You may encounter situations, when a block of code needs to be executed several number of times
            In general, statements are executed sequentially: The first statement in a function is executed
            first, followed by the second, and so on

        - Programming languages provide various control structures that allow for more complicated execution paths

        - There are many types of loops in C
            + For Loops
            + While Loops
            + Do/While Loops


    General Syntax Of While Loops:
        -


Resources:
    + https://www.guru99.com/c-loop-statement.html
    + https://www.tutorialspoint.com/cprogramming/c_functions.htm
    + https://www.section.io/engineering-education/history-of-c-programming-language/
    + https://www.youtube.com/watch?v=87SH2Cn0s9A
*/
