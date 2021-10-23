/* Write a program that prompts the user to input an integer and then outputs 
both the individual digits of the number and the sum of the digits. 
For example, it should output the individual digits of 3456 as 3 4 5 6, 
output the individual digits of 8030 as 8 0 3 0, 
output the individual digits of 2345526 as 2 3 4 5 5 2 6, 
output the individual digits of 4000 as 4 0 0 0, 
and output the individual digits of -2345 as 2 3 4 5. */
 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;  

const string SENTINEL = "q";

int main(){
    long long integer, sum = 0;
    string input = "";//initialize as blank to enter loop
    string digitString; //this will be the single digits

    while (input != SENTINEL){ //sentinel-controlled loop
         //prompt user for integer input:
        cout << "\nEnter an integer with up to 19 whole digits, or 'q' to quit: " 
        << endl;
        cin >> input;

        if (input != SENTINEL)
          //CONVERT INPUT TO INTEGER AND ASSIGN:
          integer = stoll(input); //limited to 19 digits range. How to increase?
        else
          break;

        //IF INTEGER IS NEGATIVE MAKE POSITIVE:
        if (integer < 10)
          integer = -1 * integer;

        //CONVERT THE INTEGER TO A STRING FOR SINGLE DIGIT OUTPUT.
        //USE STRINGSTREAM FROM SSTREAM HEADER:
        stringstream ss;  
        ss << integer;  
        ss >> digitString;

        //GET SUM OF DIGITS WITHIN INTEGER:
        while (integer > 0){
          sum += integer % 10;
          integer = integer/10; // removes last digit
        }//END NESTED WHILE LOOP

        //OUTPUT SEPARATED DIGITS:
        cout << "\nThe individual whole digits are: ";
        for (int i = 0; i < digitString.length(); i++){
          cout << digitString[i] << " ";
        }//END FOR LOOP

        //OUTPUT SUM OF DIGITS:
        cout << "\nThe sum of the whole digits is: " << sum << endl;
        sum = 0; //RESET SUM TO ZERO

    }//END SENTINEL-CONTROLLED WHILE LOOP

    //OUTPUT GOOD-BYE IF USER INPUTS 'q':
    cout << "\nGood-Bye" << endl;
    
    return 0; 
}//END MAIN FUNCTION