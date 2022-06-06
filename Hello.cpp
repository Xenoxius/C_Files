#include <iostream>
//#include keyword imports files...

//Lines with a double slash are single-line comments...

/*This is
 *a
 *multi-line
 *comment
 */

//or

/*This is another
multi-line comment*/

/*Comments are pieces of code that dont affect the working
of the program, but are used to give information about it
or its inner workings...*/

/*Defining the main method (or main function) that
returns int value 0*/

//NOTE: To run your program, you MUST have an int main() function.
//Otherwise, the program wont run...
int main() /*This is the function header*/ {

    //Anything within the curly braces is the function body.
    //Note: Function and Method, both mean the same thing..
    //NOTE: All statements in C++ end with a semicolon.

    std::cout << "Hello there!\n";
    //The above statement calls the 'cout' function from the 'std' class.
    //The string value "Hello there!\n" is passed to it...
    /*Note: "\n" is an Escape sequence... "\n" stands for 'new-line'
    It prints a new line at the end...*/

    return 0;
    //Finally, the function exits after returning the value 0, of type int..
}