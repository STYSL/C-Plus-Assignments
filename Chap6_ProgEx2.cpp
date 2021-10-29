//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/*Chapter Six Programming Exercise 2:
Write a value-returning function, isVowel, that returns the value  true if a given character is a vowel and otherwise returns false. */

//AUTHOR: F.RUSTIQUE JR.

#include<iostream>

using namespace std;

bool isVowel(char vowel); //FUNCTION PROTOTYPE

int main(){
    char vowel;
    cout << "Enter a letter: ";
    cin >> vowel;
    cout << isVowel(vowel) << endl;

    return 0;
}

bool isVowel(char vowel){

    switch(vowel)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
        return true;
        break;
    default:
        return false;
    }
}