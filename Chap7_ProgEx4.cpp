//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/*Chapter Seven Programming Exercise 4:
Write a program that prompts the user to input a string. The program then uses the function substr to remove all the vowels from the string.  For example, if str = "There", then after removing all the vowels, str = "Thr". After removing all the vowels, output the string. Your program must contain a function to remove all the vowels and a function to determine whether a character is a vowel.*/

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
#include <string>
#include <fstream> //Use fstream to output a file

using namespace std;

//DECLARE remVowel FUNCTION PROTOTYPE:
string remVowel(string pString);
//DECLARE isVowel FUNCTION PROTOTYPE:
bool isVowel(char vowel);

int main()
{
    //DECLARE OUTPUT FILE OBJECT:
	ofstream outputFile;
    //DECLARE STRING VARIABLES TO USE:
    string inString, word, noVowelWord, finalOutput;
    size_t i; //use for while loop

    //PROMPT USER TO ENTER STRING:
    cout << "Enter a word or sentence: ";
    getline(cin, inString); //use getline to accept more than one word
    cout << endl;

    cout << "'" << inString << "'"<< " with the vowels removed is: ";
    cout << endl;

    //SEPARATE INPUTTED STRING INTO WORDS. PASS TO remVowel FUNCTION:
    while (i != -1){
        i = inString.find_first_of(" ");
        word = inString.substr(0, i);
        noVowelWord = remVowel(word) + " ";
        //cout << noVowelWord + " ";
        inString = inString.substr(i + 1);
        finalOutput = finalOutput + noVowelWord;
    }

    cout << finalOutput << endl;

    //OPEN OUTPUT FILE:
	outputFile.open("NoVowels.txt");
	//WRITE finalOutput TO OUTPUT FILE:
	outputFile << finalOutput << endl;
	//CLOSE OUTPUT FILE
	outputFile.close();

    return 0;
}

//DEFINE isVowel FUNCTION: 
bool isVowel(char vowel){
    switch (vowel)
    {
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U': 
    case 'Y':
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': 
    case 'y': 
        return true;
    default: 
        return false;
    }
}

//DEFINE remVowel FUNCTION. USE substr function:
string remVowel(string pString){
    string::size_type len;
    string output = "";
    len = pString.length();
    for (int i = 0; i < len; i++){
        if (isVowel(pString[i])){
            //could not figure out how to use substr function
            //used replace function instead:
            pString = pString.replace(i, 1, "");
            i -= 1;
        }
    }
    return pString;                   
}
