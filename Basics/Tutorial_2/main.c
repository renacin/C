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
    int tutorial_num = 2;
    char today_date[11] = "2022-03-21";

    printf("Welcome To Tutorial #%d \nToday's Date Is: %s", tutorial_num, today_date);

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

        printf("the %s jumped over the %s, %d times", "cow", "moon", 2);
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


    Programming
        + #include <stdio.h>        Includes the standard input output library functions. The printf() function is defined in stdio.h .
        + int main()                Main() function is the entry point of every program in C language. Kind of like if __name__ == "__main__" in Python
        + printf()                  Printf() function is used to print data on the console.
        + return 0                  return 0 statement, returns execution status to the OS. The 0 value is used for successful execution and 1 for unsuccessful execution.

Resources:
    + https://www.section.io/engineering-education/history-of-c-programming-language/
    +
*/
// ----------------------------------------------------------------------------------------------------------------------
