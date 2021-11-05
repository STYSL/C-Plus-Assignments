//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter Eight Programming Exercise 5:
Write a program that prompts the user to input a string 
and outputs the string in uppercase letters. 
(Use a character array to store the string.) 
*/

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
//INCLUDE CSTRING LIBRARY FOR C-STRING MANIPULATION:
#include <cstring>

using namespace std;

//BEGIN MAIN FUNCTION:
int main(){
    //DECLARE CHARACTER ARRAY THAT WILL STORE STRING INPUT:
    char charArray[100] = "";
    
    //PROMPT USER TO INPUT A STRING:
    cout << "Input a string of characters: " << endl;
    cin.getline(charArray, 100);
    cout << endl;
    cout << charArray << " displayed as all uppercase letters is: " << endl;

    //ITERATE THROUGH AND OUTPUT THE C-STRING AS UPPERCASE LETTERS:
    for (int i = 0; i < strlen(charArray); i++)
        putchar(toupper(charArray[i])); 
    //strlen gets length of an array
    //putchar displays output to console
    //toupper converts letters to uppercase

    return 0;
}//END MAIN FUNCTION

