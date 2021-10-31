//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/*Chapter Seven Exercise 6:
Suppose that the enum flowerType is as defined in Exercise 2. 
Write a C++ function that can be used to ouput the value of a variable of type flowerType.*/

#include <iostream>
#include <string>

using namespace std;

enum flowerType {ROSE, DAISY, CARNATION, FREESIA, GARDENIA, ALLIUM, TULIP, IRIS, LILAC, ORCHID};

void printEnum(flowerType flower){
    switch(flower)
    {
    case ROSE:
        cout << "Rose";
        break; 
    case DAISY:
        cout << "Daisy";
        break;  
    case CARNATION:
        cout << "Carnation";
        break;  
    case FREESIA:
        cout << "Freesia";
        break;  
    case GARDENIA:
        cout << "Gardenia";
        break;  
    case ALLIUM:
        cout << "Allium";
        break;  
    case TULIP:
        cout << "Tulip";
        break;  
    case IRIS:
         cout << "Iris";
        break;     
    case LILAC:
        cout << "Lilac";
        break;  
    case ORCHID:
        cout << "Orchid";
        break; 
    } //end switch
} //end printEnum

int main(){
    flowerType flower;
    cout << "Type in a flower. You're options are: " 
    << "\nROSE, DAISY, CARNATION, FREESIA, GARDENIA, ALLIUM, TULIP, IRIS, LILAC, ORCHID" << endl;
    cin >> flower;
    printEnum();

    return 0;
}



