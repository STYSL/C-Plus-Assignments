//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter Seven Programming Exercise 3:
The Programming Example: Pig Latin Strings converts a string into the pig Latin form, but it processes only one word. Rewrite the program so that it can be used to process a text of an unspecified length. If a word ends with a punctuation mark, in the pig Latin form, put the punctuation at the end of the string. For example, the pig Latin form of Hello! is ello-Hay!. Assume that the text contains the following punctuation marks:, (comma),. (period),? (question mark), ; (semicolon), and: (colon). (Your program may store the output in a file.) */

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream>
#include <string>
#include <fstream>
//Declare namespace
using namespace std;
//Declare isVowel=l() function
bool isVowel(char ch);
//Declare isPunctuation() function
bool isPunctuation(char ch);
//Declare rotate() function
string rotate(string pStr);
//Declare pigLtinString() function
string pigLatinString(string pStr);

//Declare main() function
int main()
{
	//Create two string strg1 and strg2
	string strg1, strg2;
	//Create char type variable ch
	char ch;
	//Create an object of output file
	ofstream fileoutput;
	
	//Take a string value form the user
	cout << "Enter a string: ";
	//prompts string value store in strg1
	cin >> strg1;
	//end line
	cout << endl;
	//call pigLatinString() function
	strg2 = pigLatinString(strg1);
	//print strg1 value and atrg2 value
	cout << "The pig Latin form of " << strg1 << " is: "
	<< strg2 << endl;
	//open a output file
	fileoutput.open("Ch7_Ex3Out.txt");
	//write strg2 value in file
	fileoutput << strg2 << endl;
	//close file
	fileoutput.close();
	return 0;
}
//Create isVowel() function
bool isVowel(char ch)
{
	//Switch statement
	switch (ch)
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
//Create isPunctuation) function
bool isPunctuation(char ch)
{
	//Switch statement
	switch(ch)
	{
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
//Create rotate function of sring type
string rotate(string prStr)
{
	//take size of the string
	string::size_type len = prStr.length();
	//take a string varoable revStr
	string revStr;
	//Store substring
	revStr = prStr.substr(1, len - 1) + prStr[0];
	//return revStr value
	return revStr;
}
//Create pigLatinString function of sring type
string pigLatinString(string pStr)
{
	//Create an punctuation variable of char type
	char punctuation;
	//Take an boolean variable 
	//initilized with false value
	bool foundPunctuation = false;
	int lastIdx = pStr.length()-1;
	//check condition
	if(isPunctuation(pStr[lastIdx]))
	{
		punctuation = pStr[lastIdx];
		foundPunctuation = true;
		pStr.erase(pStr.begin()+lastIdx);
	}
	//take an size
	string::size_type len;
	//boolean variable
	bool foundVowel;
	string::size_type counter;
	//check condition
	if (isVowel(pStr[0]))
		pStr = pStr + "-way";
	else
	{
		pStr = pStr + '-';
		pStr = rotate(pStr);
		len = pStr.length();
		foundVowel = false;
		//execute after checking condition
		for (counter = 1; counter < len - 1;
			counter++)
			//check condition
			if (isVowel(pStr[0]))
			{
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
	//if condition is true
	if(foundPunctuation)
	{
		pStr += punctuation;
	}
	//return pStr
	return pStr;
}


// Output Value is stored in output file "Ch7_Ex3Out".
