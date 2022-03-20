// Name:                                            Renacin Matadeen
// Date:                                               03/20/2022
// Title                                        Learning C/C++: Tutorial #1
//
// ----------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
// ----------------------------------------------------------------------------------------------------------------------

int main()
{
    char user_name[1];

    printf("Hello, what is your name? | Name: ");
    scanf("%s", &user_name);
    printf("Greetings %s, It's a pleasure meeting you! \n", user_name);
    printf("I'm so happy you have started to learn the C language!");

    return 0;

}

// ----------------------------------------------------------------------------------------------------------------------
/*
Notes:

    History
        + C was developed in 1972 by Dennis Ritchie at Bell Labs (At&T) - the basis of the Unix Operating System
        + It was developed as a way to overcome the shortfalls of former languages B, BCPL, Fortran Etc..
        + By the middle of the 1970s, the C-based Unix was used in many projects within the Bell System as well as groups of
            research-oriented industrial, academic, and government organizations

        + In 1978, Brian Kernighan and Dennis Ritchie published The C Programming Language, which would serve as the
            language reference until a formal standard was adopted.
        + Five years later, the American National Standard Institute (ANSI) formed the committee, X3J11, to
            establish the formal standard of C

    Today
        + UNIX operating systems are written in C and most of Linux is also in C. Also databases such as Oracle Database,
            MySQL, MS SQL Server, and PostgresSQL are at least partially written in C. C is the basis of many system kernels
            Other programming languages, like Python and Perl, use compilers or interpreters that are written in C

        + C has changed over the years and is still a common language to use in lower level programs, like kernels
            But it is also used for many applications ranging from device drivers to other programming languages’
            compilers or interpreters.

        + The language also made way for C++, Objective-C, C#, and many more C-based languages


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
