// Name:                                            Renacin Matadeen
// Date:                                               03/20/2022
// Title                                        Learning C/C++: Tutorial #2
//
// ----------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
// ----------------------------------------------------------------------------------------------------------------------

int main()
{

    int num_1, num_2, num_ans;
    char today_date[11] = "2022-03-21", username[20];

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

        + Variable Types:
            1   char[size in bytes]    Typically a single octet(one byte). It is an integer type.
            2	int     The most natural size of integer for the machine.
            3	float   A single-precision floating point value.
            4	double  A double-precision floating point value.
            5	void    Represents the absence of type.




Resources:
    + https://www.section.io/engineering-education/history-of-c-programming-language/
    +
*/
// ----------------------------------------------------------------------------------------------------------------------
