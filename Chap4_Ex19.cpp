//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter 4, Exercise 19:
Suppose that sale and bonus are double variables. Write an if...else statement that assigns a value to bonus as follows: If sale is greater than $20,000, the value assigned to bonus is 0.10, that is 10%; If sale is greater than $10,000 and less than or equal to $20,000, the value assigned to bonus is 0.05, that is 5%; otherwise, the value assigned to bonus is 0, that is 0%.*/ 

 //AUTHOR: F.RUSTIQUE JR. 
#include <iostream>  
#include <iomanip>  
using namespace std; //std stands for standard 

int main(){
    //Declare sale and bonus as double variables:
    double sale, bonus;

    if (sale > 20000)
        bonus = 0.10;
    else if (sale > 10000 && sale <= 20000)
        bonus = 0.05;
    else bonus = 0;

    return 0; 
} 
