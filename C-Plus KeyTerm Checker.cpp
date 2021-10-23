//Program: C-Plus Key Term Checker
/* This program will prompt a user to enter the correct,
matching key word term taken from the course book with its given definition.
The definition will be displayed, one at a time, to the user as a question. 
The user will be able to quit the program at anytime by entering 'q' */

//THIS IS PSEUDOCODE = NON-WORKING PROGRAM:

//Begin header w/ necessary preprocessor directives, maybe more?:
#include <iostream>
#include <string>
#include <map>

//Use the std namespace:
using namespace std;

//Begin body with main function:
int main(){   
    string input; //Declare a string "input" variable to store prompt responses from user:
    string question; //Declare a string "question" variable to store questions pulled from a map(?)

    //Declare/create a "keyTermQuestions" identifier that will be a kind of Python dictionary of key-value pairs.
    map<string, string> keyTermQuestions;
    
        //The key-value pairs will be the key term description as a question matched with the correct key term.
        // * Will need to know how to create this in C++, possibly as a "map"?:
        //Source for how to:  https://www.freecodecamp.org/news/c-plus-plus-map-explained-with-examples/
        //Also use course book...
    
    //While loop will keep prompting user until either 'y' or 'q' is entered for "input":
    input = "null"; //input initialized to "null" to enter while loop:
    while (input != "y" || input != "q")
        //Within while loop, greet and prompt user to begin quiz or quit with 'y' or 'q':
        cout << "Hello. This is the Key Term Checker. Enter 'y' to begin or 'q' to quit: " << endl; 
        cin >> input; //if user input equals "y", begin quiz:
        if (input == "y") { 
            //A while loop will randomly select from "keyTermQuestions" and display a question, one at a time until user enters "q" to quit:
            while (input != "q")
                //assign a randomly selected keyTermQuestions to "question"
                question = random(keyTermQuestions);
                // display random question from keyTermQuestions w/ prompt for input:
                cout << question << endl;
                cout << "Enter response or 'q' to quit: "; 
                cin >> input; //User enters response or 'q' to quit:
                //If answer is correct, acknowledge, then next "keyTermQuestion" is randomly selected and displayed, 
                if (input == is correct matching value for keyTermsQuestion){
                    cout << "Correct!" << endl;
                    continue; // command to continue and randomly select another question
                } 
                while (input != is not correct matching value from keyTermQuestions || or input != "q"){
                    cout << "That is incorrect" << endl;
                    //Display the same, presently selected question:
                    cout << question << endl;
                    cout << "Enter response or 'q' to quit: " << endl;
                    cin >> input;
                    if (input == "q")
                        break; //exit while loop and program
                    if (input == is correct matching value for keyTermsQuestion){
                        cout << "Correct!" << endl;
                        continue; //exit this while loop to go back and ask a new question
                    }
                }
                if (input == "q") //if input is 'q', exit program:  
                    break;            
        }
        if (input == "q") //if user inputs 'q', exit program:
            break;

    return 0; 
} 
