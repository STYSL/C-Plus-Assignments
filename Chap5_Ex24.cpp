/*Chapter Five Exercise 24:
Write a for statement to add all the numbers divisible by 3 or 5 between 1 and 1000.*/ 
#include <iostream>

using namespace std;  

int main(){
    //int counter; //loop counter
    int num; //number to add or ignore
    int sum = 0; //sum of numbers added, initialized at 0

    /*"for" loops have "initial" loop control statement, 
    loop "condition", and "update" statement:*/
    for (num = 1; num <= 1000; num++){
        //condition to sum numbers divisible by 3 or 5 during for loop:
        if (num%3 == 0 || num%5 == 0)
            sum = sum + num;
    }
    //Dispaly result with output statement:
    cout << endl;
    cout << "The sum of numbers between 1 and 1000, divisible by 3 or 5, is: " << sum << endl;
    cout << endl;

    return 0; 
} 
