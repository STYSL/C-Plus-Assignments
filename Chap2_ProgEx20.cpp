/* Chapter 2, Programming Exercise #20:
For each used car a salesperson sells, the commission is paid as follows:  
$20 plus 30% of the selling price in excess of the cost of the car. 
Typically, the minimum selling price of the car is the cost of the car plus $200 
and the maximum selling price is the cost of the car and $2,000. 
Write a program  that prompts the user to enter the salesperson’s fixed commission, the percentage of the commission, the purchasing cost of the car, the minimum  and maximum amount to be added 
to the purchasing cost to determine the minimum and maximum selling price, and outputs minimum and maximum selling price of the car and the salesperson’s commission range.
*/

#include <iostream>
using namespace std;

int main()
{
  //declare variables to use:  
  float costOfCar, minAdded, maxAdded, fixedCommission, percentCommission;

  //Prompt user to enter fixed commission:
  cout<<"Enter salesperson's fixed commission (Recommended to be 20): $";
  //Assign input to fixedCommisson variable:
  cin>>fixedCommission;
  //Prompt user to enter commission percentage:
  cout<<"Enter commission percentage (Recommended to be 30): ";
  //Assign input to percentCommission:
  cin>>percentCommission;//Prompt user to enter cost of car:
  cout<<"Enter the purchasing cost of the car: $";
  //Assign input to costOfCar variable:
  cin>>costOfCar;
  //Prompt user to enter minimum amount to add to cost of car:
  cout<<"Enter the minimum amount to be added to the purchasing cost: $";
  //Assign input to minAdded variable:
  cin>>minAdded;
  //Prompt user to enter max amount to add to cost of car:
  cout<<"Enter the maximum amount to be added to the purchasing cost: $";
  //Assign input to maxAdded variable:
  cin>>maxAdded;
  //Display results:   
  cout<<"The minimum and maximum selling price of the car: $"<<(costOfCar+ minAdded)<<" - $"<<(costOfCar + maxAdded)<< endl;
  cout<<"The salesperson's commission range: $"<<(fixedCommission + minAdded *(percentCommission /100))<<" - $"<<(fixedCommission + maxAdded * (percentCommission / 100))<< endl;

  return 0;
}