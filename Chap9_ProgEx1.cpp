//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter Nine Programming Exercise 1:
Assume the definition of Exercise 2, which defines the struct 
computerType. Write a program that declares a variable of type 
computerType, prompts the user to input data about a computer, and 
outputs computer's data.

Exercise 2. Define a struct computerType to store the following data about a computer: Manufacturer (string), model type (string), processor  type (string), ram (int) in GB, hard drive size (int) in GB, year  when the computer was built (int), and the price (double). */

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
#include <string>

using namespace std;

//DEFINE COMPUTERTYPE STRUCT W/ REQUIRED DATA:
struct computerType {
    string Manufacturer;
    string modelType;
    string processorType;
    int ramGB, HDsizeGB, yearBuilt;
    double price;
};

//BEGIN MAIN FUNCTION:
int main(){
    //DECLARE VARIABLE OF TYPE COMPUTERTYPE:
    computerType computer;

    //PROMPT USER TO INPUT COMPUTER DATA:
    cout << "Enter the manufacturer of your computer: "; cin >> computer.Manufacturer; 
    cout << "Enter the model type of your computer: "; cin >> computer.modelType;
    cout << "Enter the processor type of your computer: "; cin >> computer.processorType;
    cout << "Enter the RAM size in GB of your computer: "; cin >> computer.ramGB;
    cout << "Enter the HD size in GB of your computer: "; cin >> computer.HDsizeGB;
    cout << "Enter the year built of your computer: "; cin >> computer.yearBuilt;
    cout << "Enter the price your computer (omit dollar sign): "; cin >> computer.price;

    //OUTPUT RECORDED COMPUTER DATA:
    cout << "\nHere is the following recorded information about your computer: " << endl;
    cout << "\nManufacturer: " + computer.Manufacturer;
    cout << "\nModel Type: " + computer.Manufacturer;
    cout << "\nProcessor Type: " + computer.Manufacturer;
    cout << "\nRAM size in GB: " + computer.Manufacturer;
    cout << "\nHD size in GB: " + computer.Manufacturer;
    cout << "\nYear built: " + computer.Manufacturer;
    cout << "\nPrice: " + computer.Manufacturer;


    return 0;
}//END MAIN FUNCTION

