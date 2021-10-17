/* 1. Write a program that produces the following output:  
**********************************   
* Programming Assignment 1 *  
* Computer Programming I *  
* Author:??? *  
* Due Date: Thursday, Jan. 24 *  
**********************************  
In your program, substitute??? with your own name. If necessary, adjust the  positions and the number of the stars to produce a rectangle.*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declare & intitialize string variables:
    string asterisks34 = "**********************************";
    string className = "*     Computer Programming I     *";
    string authorName = "*  Author: Felicito Rustique Jr  *";
    string dueDate = "*  Due Date: Saturday, Oct. 16   *";

    //display the variable identifiers using cout & string insertion operators:
    cout << " " << endl;
    cout << asterisks34 <<endl;
    cout << className << endl;
    cout << authorName << endl;
    cout << dueDate << endl;
    cout << asterisks34 << endl;
    cout << " " << endl;

    return 0;
}


