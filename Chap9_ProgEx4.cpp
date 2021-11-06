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
You may assume that the user selects only one item of a particular type. 
*/

//AUTHOR: F.RUSTIQUE, JR.

#include <iostream> 
#include <string>
#include <fstream> //for file i/o operations
#include <iomanip> //for manipulation of floating point numbers

using namespace std;

const int NO_OF_ITEMS = 8;

//DEFINE MENUITEMTYPE STRUCT:
struct menuItemType {
    string menuItem;
    double menuPrice;
};


//LIST FUNCTION PROTOTYPES:
void getData(menuItemType menulist[]);
void showMenu();
void printCheck();


//BEGIN MAIN FUNCTION:
int main(){
    //USE AN ARRAY OF MENULIST OF TYPE MENUITEMTYPE
    //ARRAY SIZE WILL BE 8 FOR THE 8 GIVEN MENU ITEMS:
    menuItemType menuList[NO_OF_ITEMS];

    //DECLARE INFILE TO USE A FILE TO GET DATA:
    ifstream infile;
    cout << fixed << showpoint << setprecision(2);
    //string inputFile;
    infile.open(menuData.txt);


    return 0;
}//END MAIN FUNCTION

//DEFINE GETDATA FUNCTION TO LOAD DATA INTO MENULIST ARRAY  
void getData(ifstream& infile, menuItemType menulist[], NO_OF_ITEMS){
    while (infile){
        for (int i = 0; i < NO_OF_ITEMS; i++) {
            infile >> menuList[i].menuItem >> menuList[i].menuPrice;
        }
    }
}//END GETDATA FUNCTION

//DEFINE SHOW MENU FUNCTION TO shows the different items offered by the restaurant and tells the user how to select the items
void showMenu(){

}//END SHOWMENU FUNCTION
