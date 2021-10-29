//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/*Chapter Six Programming Exercise 3:
Write a program that prompts the user to input a sequence of characters and outputs the number of vowels. (Use the function isVowel  written in Programming Exercise 2.)*/ 

//AUTHOR: F.RUSTIQUE JR.

#include<iostream>
using namespace std;

bool isVowel(char vowel);

int main(){
    string characters;
    int vowelCount = 0;

    cout << "Input a sequence of characters: ";
    cin >> characters;
        for (int i = 0; i < characters.length(); i++){
        if(isVowel(characters[i]))
            vowelCount++;
        }

    cout << "The number of vowels in the sequence is: " << vowelCount << endl;
    
    return 0;
}

bool isVowel(char vowel){

    switch(vowel){
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
