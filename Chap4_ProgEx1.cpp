/*Chapter Four Programming Exercise 1:
Write a program that prompts the user to input a number. The program should then output the number and a message saying whether the number is positive, negative, or zero.*/ 
  
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string SENTINEL = "q";

int main(){
    string input;
    double number;
    cout << fixed << showpoint;
    cout << setprecision(4);
    cout << "\nEnter a number or 'q' to quit: ";
    cin >> input;
    /*if (cin.fail()){
        cout << "\nYou did not enter a number." << endl;
        main();
    }*/ 
    while (input != SENTINEL){
        //if input is not 'q' covert string to double with "stod" function:
        number = stod(input);
        if (number > 0){ //decision statement
            cout << "\n" << number << " is postive." << endl; //action statement
            main();
            break;
        }
        else if (number < 0){
            cout << "\n" << number << " is negative." << endl;
            main();
            break;
        }
        else {
            cout << "\n" << number << " is zero." << endl;
            main();
            break;
        }        
    }

    return 0; 
} 
