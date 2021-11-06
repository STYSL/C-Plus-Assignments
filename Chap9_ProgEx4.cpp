//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter Nine Programming Exercise 4:
Write a program to help a local restaurant automate its breakfast billing system. The program should do the following:  
    a. Show the customer the different breakfast items offered by the restaurant.  
    b. Allow the customer to select more than one item from the menu.  
    c. Calculate and print the bill. 
Assume that the restaurant offers the following breakfast items  (the price of each item is shown to the right of the item):  
Plain Egg $1.45  Bacon and Egg $2.45  Muffin $0.99  French Toast $1.99  Fruit Basket $2.49  Cereal $0.69  Coffee $0.50  Tea $0.75  
Use an array menuList of type menuItemType, as defined in Programming Exercise 3:
Define a struct menuItemType with two components: menuItem of type string and menuPrice of type double. 
Your program must contain at least the following functions:  
Function getData: This function loads the data into the array menuList.  
Function showMenu: This function shows the different items offered by the restaurant and tells the user how to select the items.  
Function printCheck: This function calculates and prints the check. (Note that the billing amount should include a 5% tax.)  
A sample output is:  Welcome to Johnny's Restaurant  Bacon and Egg $2.45  Muffin $0.99  Coffee $0.50  Tax $0.20  Amount Due $4.14  
Format your output with two decimal places. The name of each item in the output must be left justified. 
You may assume that the user selects only one item of a particular type. */

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
#include <string>
#include <fstream> //for file i/o operations
#include <iomanip> //for manipulation of floating point numbers
#include <cstring> //for c-string manipulation

using namespace std;

const int NO_OF_ITEMS = 8;

//DEFINE MENUITEMTYPE STRUCT:
struct menuItemType {
    string menuItem;
    double menuPrice;
};

//LIST FUNCTION PROTOTYPES:
void getData(ifstream& infile, menuItemType menuList[], int listSize); //3 parameters
void showMenu(menuItemType mList[], int listSize); //2 parameters
void printCheck(menuItemType mList[], int listSize, int cList[], int cListLength); //4 parameters
void makeSelection(int listSize, int cList[], int& cListLength); //3 parameters
bool isItemSelected(int clist[], int cListLength, int itemNo); //3 parameters

//BEGIN MAIN FUNCTION:
int main(){
    //USE AN ARRAY OF MENULIST OF TYPE MENUITEMTYPE
    //ARRAY SIZE WILL BE 8 FOR THE 8 GIVEN MENU ITEMS:
    menuItemType menuList[NO_OF_ITEMS];

    //DECLARE CHOICELIST ARRAY TO REPRESENT MENU NUMBERS:
    int choiceList[NO_OF_ITEMS];
    int choiceListLength;

    //USE INFILE OBJET TO USE A FILE TO GET DATA:
    ifstream infile;
    //ENSURE PRICES ARE DISPLAYED WITH TWO DECIMALS:
    cout << fixed << showpoint << setprecision(2);
    //string inputFile;
    infile.open("menuData.txt");

    if (!infile){
        cout << "No data file found to use. Program will terminate." << endl;
        return 1; //Not sure why you have to return a 1.
    }

    //USE GETDATA FUNCTION:
    getData(infile, menuList, NO_OF_ITEMS);
    //USE SHOWMENU FUNCTION:
    showMenu(menuList, NO_OF_ITEMS);
    //USE MAKESELECTION FUNCTION:
    makeSelection(NO_OF_ITEMS, choiceList, choiceListLength);
    //USE PRINTCHECK FUNCTION:
    printCheck(menuList, NO_OF_ITEMS, choiceList, choiceListLength);

    return 0;
}//END MAIN FUNCTION

//DEFINE GETDATA FUNCTION TO LOAD DATA INTO MENULIST ARRAY  
void getData(ifstream& infile, menuItemType mList[], int listSize){
    //while (infile){
    char ch;
    for (int i = 0; i < listSize; i++) {
        getline(infile, mList[i].menuItem);
        infile >> mList[i].menuPrice;
        infile.get(ch);
    }
    //}
}//END GETDATA FUNCTION

//DEFINE SHOWMENU FUNCTION TO SHOW ITEMS OFFERED:
void showMenu(menuItemType mList[], int listSize){
    cout << "WELCOME TO JOHNNY'S RESTAURANT" << endl;
    cout << "********** Today's Menu **********" << endl;
    for (int i = 0; i < listSize; i++) 
        cout << i + 1 << ": " << left << setw(15) << mList[i].menuItem 
        << right << " $" << mList[i].menuPrice << endl;
    cout << endl;
}//END SHOWMENU FUNCTION

//DEFINE MAKESELECTION FUNCTION TO TELL USER HOW TO SELECT A MENU ITEM:
void makeSelection(int listSize, int cList[], int& cListLength){
    int itemNo;
    char response;
    cListLength = 0;
    cout << "Make up to " << listSize << " single order selections." << endl;
    cout << "Do you want to make a selection? Enter 'y' for yes or 'n' for no: " << endl;
    cin >> response;
    cout << endl;
    while ((response == 'y') && (cListLength < 8)){
        cout << "Enter menu item number: ";
        cin >> itemNo;
        cout << endl;
        if (!isItemSelected(cList, cListLength, itemNo))
            cList[cListLength++] = itemNo -1;
        else
            cout << "Item already selected." << endl;
        cout << "Select another item? Enter 'y' for yes or 'n' for no: " << endl;
        cin >> response;
        cout << endl;
    }
}//END MAKESELECTION FUNCTION

//DEFINE ISITEMSELECTED FUNCTION:
bool isItemSelected(int cList[], int cListLength, int itemNo){
    bool found = false;
    for (int i = 0; i < cListLength; i++)
        if (cList[i] == itemNo){
            found = true;
            break;
        }
    return found;
}//END ISITEMSELECTED FUNCTION

//DEFINE PRINTCHECK FUNCTION:
void printCheck(menuItemType menuList[], int listSize, int cList[], int cListLength){
    double salesTax;
    double amountDue = 0.0;
    cout << "WELCOME TO JOHNNY'S RESTAURANT" << endl;
    cout << "********** Your Check **********" << endl;
    for (int i = 0; i < cListLength; i++){
        cout << left << setw(15) << menuList[cList[i]].menuItem
        << right << " $" << setw(4) << menuList[cList[i]].menuPrice << endl;
        amountDue += menuList[cList[i]].menuPrice;
    }
    salesTax = amountDue * .05;
    cout << left << setw(15) << "Tax: " << right << " $" << salesTax << endl;
    amountDue += salesTax;
    cout << left << setw(15) << "Amount Due: " << right << " $" << amountDue << endl;
}//END PRINTCHECK FUNCTION