//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter Eight Programming Exercise 1:
Write a C11 program that declares an array alpha of 50 components of type double.
Initialize the array so that the first 25 components are equal to the square of the
index variable, and the last 25 components are equal to three times the index
variable. Output the array so that 10 elements per line are printed. */

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
#include <string>

using namespace std;

//BEGIN MAIN FUNCTION:
int main(){
    //DECLARE ARRAY ALPHA OF 50 COMPONENTS TYPE DOUBLE:
    double alpha[50];
    
    cout << "Here is a type double array of 50 components where "
    << "\nthe first 25 components are equal the square of its index variable " << "\nand the last 25 components are equal to "
    << "\nthree times its index variable. " 
    << "\nThe output is displayed 10 elements per line: " << endl;
    cout << endl; 

    /*INITIALIZE ARRAY SO FIRST 25 COMPONENTS 
    ARE EQUAL TO SQUARE OF INDEX VARIABLE 
    AND LAST COMPONENTS ARE EQUAL TO 
    3 TIMES THE INDEX VARIABLE*/
    int i;
    for (i = 0; i < 25; i++)
        alpha[i] = i*i;
    for (i = 25; i < 50; i++)
        alpha[i] = i*3;

    //OUTPUT THE ARRAY SO THAT 1O ELEMENTS PER LINE ARE PRINTED:
    for (i = 0; i < 10; i++)
        cout << alpha[i] << " ";
        cout << endl;
    for (i = 10; i < 20; i++)
        cout << alpha[i] << " ";
        cout << endl;
    for (i = 20; i < 30; i++)
        cout << alpha[i] << " ";
        cout << endl;
    for (i = 30; i < 40; i++)
        cout << alpha[i] << " ";
        cout << endl;
    for (i = 40; i < 50; i++)
        cout << alpha[i] << " ";
        cout << endl;
    
    return 0;
}//END MAIN FUNCTION

