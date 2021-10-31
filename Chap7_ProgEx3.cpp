//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter Seven Programming Exercise 3:
The Programming Example: Pig Latin Strings converts a string into the pig Latin form, but it processes only one word. Rewrite the program so that it can be used to process a text of an unspecified length. If a word ends with a punctuation mark, in the pig Latin form, put the punctuation at the end of the string. For example, the pig Latin form of Hello! is ello-Hay!. Assume that the text contains the following punctuation marks:, (comma),. (period),? (question mark), ; (semicolon), and: (colon). (Your program may store the output in a file.) */

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
#include <string>
#include <fstream> //Use fstream to output a file

using namespace std;

//DECLARE FUNCTION PROTOTYPES TO USE:
bool isVowel(char ch); // To identify vowels
bool isPunctuation(char ch); //To put punctuation marks at the end of a word
string rotate(string pStr); //To move the first characters of a word before it's first vowel to the end of the word
string pigLatinString(string pStr);

int main(){
    //DECLARE OUTPUT FILE OBJECT:
	ofstream outputFile;
    //DECLARE INPUT AND PIG LATIN STRINGS:
    string str, word, pigLatin, finalPhrase;
    size_t i; //use for while loop

    cout << "Enter a word or sentence: ";
    //cin >> str;
    getline(cin, str);//use getline to accept more than one word
    cout << endl;

    cout << "The pig Latin form of ' " << str << "' is: ";
    cout << endl;

    //SEPARATE INPUTTED STRING INTO WORDS:
    while (i != -1){
        i = str.find_first_of(" ");
        word = str.substr(0, i);
        pigLatin = pigLatinString(word) + " ";
        str = str.substr(i + 1);
        finalPhrase = finalPhrase + pigLatin;
    }

    cout << finalPhrase << endl;
	
    //OPEN OUTPUT FILE:
	outputFile.open("PigLatin.txt");
	//WRITE finalPhrase TO OUTPUT FILE:
	outputFile << finalPhrase << endl;
	//CLOSE OUTPUT FILE
	outputFile.close();

    return 0;
} //END MAIN FUNCTION

//DEFINE isVowel FUNCTION TO FIND VOWELS: 
bool isVowel(char ch){
    switch (ch){
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

//DEFINE isPunctuation FUNCTION
bool isPunctuation(char ch){
	//Switch statement
	switch(ch){
		case ',':
		case '.':
		case '?':
		case ';':
		case ':':
		case '!':
		    return true;
		default:
			return false;
	}
}

//DEFINE rotate FUNCTION 
string rotate(string pStr){
    string::size_type len = pStr.length();
    string rStr;
    rStr = pStr.substr(1, len - 1) + pStr[0];
    return rStr;
} //END rotate FUNCTION

//DEFINE pigLatinString FUNCTION
string pigLatinString(string pStr){
    
    //DETERMINE IF LAST CHARACTER OF WORD ENDS WITH PUNCTUATION MARK
	char punctuation;
	bool foundPunctuation;
	int lastIdx = pStr.length()-1;
	if (isPunctuation(pStr[lastIdx])){
		punctuation = pStr[lastIdx];
		foundPunctuation = true;
		pStr.erase(pStr.begin()+lastIdx);
	}
    string::size_type len;
    bool foundVowel;	
    string::size_type counter;
    if (isVowel(pStr[0]))                       
        pStr = pStr + "-way";	
    else {                                       
        pStr = pStr + '-';
        pStr = rotate(pStr);                    
        len = pStr.length();                    
        foundVowel = false;                     
        for (counter = 1; counter < len - 1; counter++)  
            if (isVowel(pStr[0])){
                foundVowel = true;
                break;
            }
            else                                
                pStr = rotate(pStr);
        if (!foundVowel)                        
            pStr = pStr.substr(1, len) + "-way";
        else
            pStr = pStr + "ay";
    }
    //IF TRUE, ADD THE PUNCTUATION MARK TO END OF WORD:
	if(foundPunctuation){
		pStr += punctuation;
	}
    return pStr;                                
} //END pigLatinString FUNCTION
