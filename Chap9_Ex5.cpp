//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

Chapter Nine Exercise 5:
Consider the declaration of the struct houseType given in this chapter. Suppose firstHouse and secondHouse are variables of houseType. Write C11 statement(s) to compare the style and price of firstHouse and secondHouse. Output true if the corresponding values are the same; false otherwise. 

ANSWER:

if ((firstHouse.style == secondHouse.style) && (firstHouse.price == secondHouse.price))
    //return true;
    cout << "True";
else
    //return false;
    cout << "False";