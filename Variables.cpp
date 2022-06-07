#include <iostream>

//Creating the main function
int main() {
    /*While creating variables, try to use meaningful names..
     *Dont go crazy with the naming schemes!
     *Keeping code readable is important too!
     */

    int age = 17;
    //Creates a variable named 'age' of type 'int' and stores the value 17...
    //You declare varaibles like this: "{variable_type} {variable_name};" like,

    int example; /*Here, the variable 'example' is decaled, but
    not initialised with any value...*/

    //or

    int someInt = 5; //Here its initialised as well...
    //int data type stores whole numbers such as 6, 89, 43565, etc.. no decimals...

    float x = 0.10F;
    /*float data type stores decimal values... it doesnt offer much precision,
    and ends with 'F'... like 0.34F, 678.345F, etc*/

    double pi = 3.141592;
    /*double data type is literally double the size of a float, viz 64 bits
    and DOESNT end with 'F'... example: 56.76876 or 5467.878990 etc..*/

    char letter = 'a';
    char digit = '4';
    char specialCharacter = '$';
    char escapeSequence = '\n';
    /*A char data type is a datatype that stores 1 character only...
     *It can be a digit, a blank space (or whitespace precisely), emoji, escape sequence, anything..
     *By default, characters are ASCII encoded...
     */

    bool isAgeSeventeen = true;
    /*A bool is a datatype that can hold 2 states... true or false...
     *Its used as a condition for building logic and getting stuff done.
     *NOTE: Bool values are NOT strings!!! (so no double quotes whatsoever)
     */

    char sentence[] = "This is a sample sentence...";
    /*This is a character Array also called a String.
     *Strings use double quotes, whereas char use single quotes...
     *You can also create string using the std class...
     *You have arrays or int,double,float etc too....
     *You can create an array like: "{variable_type} {variable_name}[array_length];"
     *Array variables have square braces after their name...you can also specify its
     *length within the square braces...More on those later.
     */

    std::string sentence2 = "This is a sample string...";
    /*Here, it creates a variable named 'sentence2' of the datatype
     *std::string....
     */

    return 0;
    //returns the value 0....
}