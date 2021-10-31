//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/*Chapter Seven Programming Exercise 3:
Write a program that prompts the user to input a string. The program then uses the function substr to remove all the vowels from the string.  For example, if str = "There", then after removing all the vowels, str = "Thr". After removing all the vowels, output the string. Your program must contain a function to remove all the vowels and a function to determine whether a character is a vowel.*/

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
#include <string>

using namespace std;

bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string pStr);

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;
    cout << endl;

    cout << "The pig Latin form of " << str << " is: "
         << pigLatinString(str) << endl;

    return 0;
}
 
bool isVowel(char ch)
{
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

string rotate(string pStr)
{
    string::size_type len = pStr.length();

    string rStr;

    rStr = pStr.substr(1, len - 1) + pStr[0];

    return rStr;
}

string pigLatinString(string pStr)
{
    string::size_type len;

    bool foundVowel;
	
    string::size_type counter;

    if (isVowel(pStr[0]))                       //Step 1
        pStr = pStr + "-way";	
    else                                        //Step 2
    {
        pStr = pStr + '-';
        pStr = rotate(pStr);                    //Step 3

        len = pStr.length();                    //Step 3.a
        foundVowel = false;                     //Step 3.b

        for (counter = 1; counter < len - 1; 
                          counter++)            //Step 3.d
            if (isVowel(pStr[0]))
            {
                foundVowel = true;
                break;
            }
            else                                //Step 3.c
                pStr = rotate(pStr);

        if (!foundVowel)                        //Step 4
            pStr = pStr.substr(1, len) + "-way";
        else
            pStr = pStr + "ay";
    }

    return pStr;                                //Step 5
}
