// Name:                                            Renacin Matadeen
// Date:                                               03/20/2022
// Title                                        Learning C/C++: Tutorial #2
//
// ----------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// ----------------------------------------------------------------------------------------------------------------------

int main()
{

    int num_1, num_2, num_ans;
    char today_date[11] = "2022-03-21";


    printf("MATH MULTIPLY BOT 9000\n");
    printf("Today's Date Is: %s\n", today_date);

    printf("Number 1: ");
    scanf("%i", &num_1);

    printf("Number 2: ");
    scanf("%i", &num_2);

    num_ans = num_1 * num_2;

    printf("\n...Crunching Numbers\n");
    printf("Answer: %i", num_ans);

    return 0;
}

// ----------------------------------------------------------------------------------------------------------------------
/*
Notes:
    Basic Input & Output:
        + With C you can take an input from a user, or display content to a user
        + Use printf("Text") to print some text out to the user. Note that new lines are defined after statement

        + Like most programming languages printf() allows for escape characters
            \a	Alarm or Beep
            \b	Backspace
            \f	Form Feed
            \n	New Line
            \r	Carriage Return
            \t	Tab (Horizontal)
            \v	Vertical Tab
            \\	Backslash
            \'	Single Quote
            \"	Double Quote
            \?	Question Mark
            \nnn	octal number
            \xhh	hexadecimal number
            \0	Null

        + C also allows for fairly robust string formatting with the printf() function
            EXAMPLE: printf("the %s jumped over the %s, %d times", "cow", "moon", 2);

            %c	character
            %d	decimal (integer) number (base 10)
            %e	exponential floating-point number
            %f	floating-point number
            %i	integer (base 10)
            %o	octal number (base 8)
            %s	a string of characters
            %u	unsigned decimal (integer) number
            %x	number in hexadecimal (base 16)
            %%	print a percent sign
            \%	print a percent sign

        + Use scanf("%s", &user_name); to write the users input into a predetermined variable

    Variables:
        + A variable is nothing but a name given to a storage area that our programs can manipulate.
            Each variable in C has a specific type, which determines the size and layout of the variable's memory;
            the range of values that can be stored within that memory; and the set of operations that can be
            applied to the variable.

        + Creating Varibales:
            + variabletype variablename[size if applicable] = intial variable value;
            + In C you can intialize a varibale, declare a variable or both.
            + int num_cars; INTIALIZATION
            + num_cars = 10; DECLARATION
            + int num_cars = 10; BOTH

        + Variable Types:

            Signed          +/-         (Splits range)
            UnSigned        +           (no Split, Greater Range)

            By default all data types are signed. Be careful!

            char        | Single character                      | %c
            char[]      | Arrays of characters - Strings        | %s
            float       | 4 Bytes Of Mem, 6-7 Digits            | %f
            double      | 8 Bytes Of Mem, 15-16 Digits          | %lf
            bool        | 1 Byte Of Mem, true-false             | %d
            int         | 4 Bytes Of Mem, -2Mil/+2Mil           | %d or %u
            long long   | 8 Bytes Of Mem, -9Quint/+9Quint       | %lld or % llu


            float   A single-precision floating point value.
            double  A double-precision floating point value.
            void    Represents the absence of type.




Resources:
    + https://www.section.io/engineering-education/history-of-c-programming-language/
    + https://www.youtube.com/watch?v=87SH2Cn0s9A
*/
// ----------------------------------------------------------------------------------------------------------------------
