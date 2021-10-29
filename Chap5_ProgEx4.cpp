//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter 5, Programming Exercise 4
To make telephone numbers easier to remember, some companies use letters to show their telephone number.
For example, using letters, the telephone number 438-5626 can be shown as GET LOAN. 
In some  cases, to make a telephone number meaningful, companies might use  more than seven letters. 
For example, 225-5466 can be displayed as CALL HOME, which uses eight letters. 
Write a program that prompts the user to enter a telephone number expressed in letters and outputs the  corresponding telephone number in digits. If the user enters more than seven letters, then process only the first seven letters. Also output the - (hyphen) after the third digit. Allow the user to use both uppercase  and lowercase letters as well as spaces between words. Moreover, your program should process as many telephone numbers as the user wants.
 */

//AUTHOR: F.RUSTIQUE JR. 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;  

const string SENTINEL = "0";

//BEGIN MAIN FUNCTION
int main (){

    //DECLARE INPUT AS STRING DATA TYPE:
    string input;
    while (input != SENTINEL){ //sentinel-controlled loop
        //PROMPT TO ENTER TELEPHONE # AS LETTERS :
        cout << "\nEnter 7 letters to create an equivalent 1-800 phone number." 
        << "\nA combination of the first three letters with the other four"
        << "\nshould form a phrase or a complete word." 
        << "\nFor example, enter 'YOUTYPE' if you want your number to be 1-800-YOU-TYPE."
        << "\nOr, enter '0' quit: ";
        cin >> input;

        //EXIT IF ZERO GETS ENTERED:
        if (input == "0")
        break;

        //OUTPUT INPUTTED LETTERS AS CORRESPONDING NUMBERS:
        cout << "\nYou're corresponding number for 1-800-" << input << " is: "
        << "\n1-800-";

        /*CONVERT AND OUTPUT FIRST 3 LETTERS TO NUMBERS
        USING A SWITCH IN A FOR LOOP:*/
        for (int i = 0; i < 3; i++){
            switch(input[i]){
            case 'A':
            case 'a':
            case 'B':
            case 'b':
            case 'C':
            case 'c':
                cout << 2;
                break;
            case 'D':
            case 'd':
            case 'E':
            case 'e':
            case 'F':
            case 'f':
                cout << 3;
                break;
            case 'G':
            case 'g':
            case 'H':
            case 'h':
            case 'I':
            case 'i':
                cout << 4;
                break;
            case 'J':
            case 'j':
            case 'K':
            case 'k':
            case 'L':
            case 'l':
                cout << 5;
                break;
            case 'M':
            case 'm':
            case 'N':
            case 'n':
            case 'O':
            case 'o':
                cout << 6;
                break;
            case 'P':
            case 'p':
            case 'Q':
            case 'q':
            case 'R':
            case 'r':
            case 'S':
            case 's':
                cout << 7;
                break;
            case 'T':
            case 't':
            case 'U':
            case 'u':
            case 'V':
            case 'v':
                cout << 8;
                break;
            case 'W':
            case 'w':
            case 'X':
            case 'x':
            case 'Y':
            case 'y':
            case 'Z':
            case 'z':
                cout << 9;
                break;
            }//END SWITCH
        }//END FOR LOOP
        
        //DISPLAY HYPHEN AFTER 3RD DIGIT
        cout << "-";         
        /*CONVERT AND OUTPUT REMAINING 4 LETTERS FROM INPUT 
        TO NUMBERS USING A SWITCH IN A FOR LOOP:*/
        for (int i = 3; i < 7; i++){
            switch(input[i]){
            case 'A':
            case 'a':
            case 'B':
            case 'b':
            case 'C':
            case 'c':
                cout << 2;
                break;
            case 'D':
            case 'd':
            case 'E':
            case 'e':
            case 'F':
            case 'f':
                cout << 3;
                break;
            case 'G':
            case 'g':
            case 'H':
            case 'h':
            case 'I':
            case 'i':
                cout << 4;
                break;
            case 'J':
            case 'j':
            case 'K':
            case 'k':
            case 'L':
            case 'l':
                cout << 5;
                break;
            case 'M':
            case 'm':
            case 'N':
            case 'n':
            case 'O':
            case 'o':
                cout << 6;
                break;
            case 'P':
            case 'p':
            case 'Q':
            case 'q':
            case 'R':
            case 'r':
            case 'S':
            case 's':
                cout << 7;
                break;
            case 'T':
            case 't':
            case 'U':
            case 'u':
            case 'V':
            case 'v':
                cout << 8;
                break;
            case 'W':
            case 'w':
            case 'X':
            case 'x':
            case 'Y':
            case 'y':
            case 'Z':
            case 'z':
                cout << 9;
                break;
            }//END SWITCH
        }//END FOR LOOP
        cout << endl;
    }//END SENTINEL-CONTROLLED WHILE LOOP

    //OUTPUT GOOD-BYE IF USER INPUTS '0':
    cout << "\nGood-Bye" << endl;

    return 0;
}//END MAIN FUNCTION


