//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

Chapter Seven Exercise 2:
Write C++ statements that do the following:

a. Define an enum type, flowerType, with the values ROSE, DAISY,  CARNATION, FREESIA, GARDENIA, ALLIUM, TULIP, IRIS, SUNFLOWER,  LILAC, and ORCHID.

    enum flowerType {ROSE, DAISY, CARNATION, FREESIA, GARDENIA, ALLIUM, TULIP, IRIS, LILAC, ORCHID}

b. Declare a variable flower of the type flowerType.

    flowerType flower;

c. Assign TULIP to the variable flower.

    flower = TULIP;

d. Use part c, to assign IRIS to flower.

    flower = IRIS;

e. Decrement flower to the previous value in the list.

    flower = static_cast<flowerType>(flower -1);

f. Output the value of the variable flower.

    cout << flower << endl;

g. Input value in the variable flower. 

    string flowers;
    cin >> flowers;

    if (flowers == "tulip")
        flower = TULIP;

Chapter Seven Exercise 6:
Suppose that the enum flowerType is as defined in Exercise 2. 
Write a C++ function that can be used to ouput the value of a variable of type flowerType.

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

