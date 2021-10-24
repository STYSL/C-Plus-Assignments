//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter 2, Programming Exercise 4:
Repeat Programming Exercise 3 by declaring num1, num2, and num3, and average of type double. Store 75.35 into num1, -35.56 into num2, and 15.76 into num3.    
*/

//AUTHOR: F.RUSTIQUE JR.
#include <iostream>
using namespace std;

int main()
{
    //declare int variables num1, num2, num3, and average:
    double num1, num2, num3, average;
    num1 = 75.35;
    num2 = -35.56;
    num3 = 15.76;
    average = (num1+num2+num3)/3;

    cout << "Value of num1 = " << num1 << endl;
    cout << "Value of num2 = " << num2 << endl;
    cout << "Value of num3 = " << num3 << endl;
    cout << "Average of those numbers is " << average << endl;

    return 0;
}


