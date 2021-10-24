//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/* Chapter 3, Programming Exercise 1:
Consider the following incomplete C++ program:  
#include <iostream>  
int main()
{  
...  
}  
a. Write a statement that includes the header files fstream, string,  and iomanip in this program.  
b. Write statements that declare inFile to be an ifstream variable  and outFile to be an ofstream variable.  
c. The program will read data from the file inData.txt and write output to the file outData.txt. Write statements to open both of these files, associate inFile with inData.txt, and associate outFile with outData.txt.  
d. Suppose that the file inData.txt contains the following data:

    Giselle Robinson Accounting  
    5600 5 30  
    450 9  
    75 1.5  

The first line contains a person’s first name, last name, and the  department the person works in. In the second line, the first number represents the monthly gross salary, the bonus (as a percent),  and the taxes (as a percent). The third line contains the distance  traveled and the traveling time. The fourth line contains the number of coffee cups sold and the cost of each coffee cup. Write statements so that after the program executes, the contents of the file  outData.txt are as shown below. If necessary, declare additional  variables. Your statements should be general enough so that if the  content of the input file changes and the program is run again (without editing and recompiling), it outputs the appropriate results.

    Name: Giselle Robinson, Department: Accounting  
    Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00%  
    Paycheck: $4116.00

    Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours
    Average Speed: 50.00 miles per hour

    Number of Coffee Cups Sold: 75, Cost: $1.50 per cup  
    Sales Amount = $112.50 

e. Write statements that close the input and output files.  
f. Write a C++ program that tests the statements in parts a through e.*/

//AUTHOR: F.RUSTIQUE JR.

// Make "preprocessor directives" and include the header file fstream in the program to work with file i/o:
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //Declare file stream variables to use as the ifstream and ofstream predefined functions: 
    ifstream inFile;
    ofstream outFile; 
    //Declare variables with identifiers representing .txt file data:
    string fName, lName, dept;
    float mSalary, mBonus, taxRate;
    //preTaxEarning and taxDeduction declared to use for formulas
    float totalEarnings, taxDeduction, payCheck;
    float disTrav, travTime, avgSpeed;
    int cupSold;
    float cupCost, salesAmnt;

    //Associate file stream variables with I/O sources and open those sources:
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    /*To output the floating-point numbers in a fixed decimal format with a decimal point and trailing zeros, set the manipulators "fixed" and "showpoint". To output the floating-point numbers with two decimal places, set the precision to two.*/
    outFile << fixed << showpoint;
    outFile << setprecision(2);
    //Output statement with stream insertion operator:
    cout << endl; //blank line for display readability
    cout << "Processing data..." << endl;

    //Code for data manipuation:
    /*Use stream extraction operators to read from inData.txt file and store to declared variables,
    then use stream insertion operators to write text & variable values to outData.txt file:*/
    inFile >> fName >> lName >> dept;
    outFile << "Name: " << fName << " " << lName << " Department: " << dept << endl;
    inFile >> mSalary >> mBonus >> taxRate;
    outFile << "Monthly Gross Salary: $" << mSalary << " Monthly Bonus: " << mBonus << "%" 
    << " Taxes: " << taxRate << "%" << endl;
    //calculate payCheck and output value to outData file:
    totalEarnings = mSalary + (mBonus/100 * mSalary);
    taxDeduction = (taxRate/100) * (mSalary + (mBonus/100 * mSalary));
    payCheck = totalEarnings - taxDeduction; 
    outFile << "Paycheck: $" << payCheck << endl; 
    outFile << endl; //blank line for .txt file layout

    inFile >> disTrav >> travTime;
    outFile << "Distance Traveled: " << disTrav << " miles, Traveling Time: " << travTime << " hours" << endl;
    //calculate average speed and write to outData file:
    avgSpeed = disTrav/travTime;
    outFile << "Average Speed: " << avgSpeed << " miles per hour" << endl;
    outFile << endl; //blank line for .txt file layout

    inFile >> cupSold >> cupCost;
    outFile << "Number of Coffee Cups Sold: " << cupSold << ", Cost: $" << cupCost << " per cup" << endl;
    //calculate coffee sales and write to outData file:
    salesAmnt = cupSold * cupCost;
    outFile << "Sales Amount = $" << salesAmnt << endl;
    outFile << endl; //blank line for .txt file layout

    //Use output statements to display what was processed and written to outData.txt file:
    cout << "The following was written to the outData.txt file: " << endl;
    cout << endl; //blank line for diplay readability
    cout << fixed << setprecision(2) << showpoint; //use manipulators to include trailing decimal zeros
    cout << "Name: " << fName << " " << lName << " Department: " << dept << endl;
    cout << "Monthly Gross Salary: $" << mSalary << " Monthly Bonus: " << mBonus << "%" 
    << " Taxes: " << taxRate << "%" << endl;
    cout << "Paycheck: $" << payCheck << endl; 
    cout << endl; //blank line for diplay readability
    cout << "Distance Traveled: " << disTrav << " miles, Traveling Time: " << travTime << " hours" << endl;
    cout << "Average Speed: " << avgSpeed << " miles per hour" << endl;
    cout << endl; //blank line for diplay readability
    cout << "Number of Coffee Cups Sold: " << cupSold << ", Cost: $" << cupCost << " per cup" << endl;
    cout << "Sales Amount = $" << salesAmnt << endl;
    cout << endl; //blank line for display readability

    //close the files:
    inFile.close();
    outFile.close();

    return 0;
}

/*File I/O is a five-step process:  
1. Include the header file fstream in the program.  
2. Declare file stream variables.  
3. Associate the file stream variables with the I/O sources.  
4. Use the file stream variables with >>, <<, or other I/O functions.  
5. Close the files. 

Malik, D. S.. C++ Programming: From Problem Analysis to Program Design (MindTap Course List) (p. 161). Cengage Learning. Kindle Edition.*/ 
