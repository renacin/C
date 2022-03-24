// Name:                                            Renacin Matadeen
// Date:                                               03/24/2022
// Title                                        Learning C/C++: Tutorial #3
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
        + A function is a group of statements that together perform a task. Every C program has at least one function
            which is main(), and all the most trivial programs can define additional functions. You can divide up your code
            into separate functions

        + A function declaration tells the compiler about a function's name, return type, and parameters.
            A function definition provides the actual body of the function.

        + A function can also be referred as a method or a sub-routine or a procedure, etc.


    General Syntax Of A Function:
        return_type function_name (argument list)
        {
            Set of statements – Block of code
        }

Resources:
    + https://www.tutorialspoint.com/cprogramming/c_functions.htm
    + https://www.section.io/engineering-education/history-of-c-programming-language/
    + https://www.youtube.com/watch?v=87SH2Cn0s9A

*/
