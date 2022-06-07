#include <iostream>
#include <stdio.h>

/*The #include can be written in 2 ways...
The first being -> #include <xyz-program>
The use of the angle braces have a special significance...
In this, the compiler searches for the xyz-program in standard system folders...

The second being -> #include "xyz-program"
Note the use of double quotes here...
This indicates that you are searching for the xyz-program in your personal
user folders....

And one more thing, Every C program is a valid C++ program....
Hence, you can use C files along with C++...

So, instead of <iostream> you could also use <stdio.h>....*/


//Declaring a function named 'printWithC' which is of 'void' type...
//You declare functions like this: "{function_return_datatype} {function_name}(parameters)"
//Functions which are declared void do not have a 'return' statement...
void printWithC(char sentence[]) {

    /*Calling or Invoking the "prinf" function which prints
    the value of the character array (or string) on the console or terminal*/

    printf(sentence);

    //printf function belongs to stdio.h
}
//Function ends

//Declaring another function named 'printWithCpp' which is of 'void' type.
void printWithCpp(char sentence[]) {

    //Calling the cout of std class....
    std::cout << sentence + '\n';
    //Belongs to iostream
}
//Function ends

//Creating the main function...
int main() {

    //Creating a sample string to be passed as an argument to the above functions...
    char sampleSentence[] = "This is a test string of a C++ program.";

    //Invokes the printWithC function and passes the value of char sampleSentence[] to it....
    printWithC(sampleSentence);

    //Invokes the printWithCpp function and passes the value of char sampleSentence[] to it....
    printWithCpp(sampleSentence);

    //Finally returns 0...
    return 0;
}