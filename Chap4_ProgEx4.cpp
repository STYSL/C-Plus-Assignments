//Malik, D. S.. C++ Programming: From Problem Analysis to Program Design, 8th edition. 

/*Chapter Four, Programming Exercise 4:
The statements in the following program are in incorrect order. Rearrange the statements so that they prompt the user to input the shape type (rectangle, circle, or cylinder) and the appropriate dimension of the shape. The program then outputs the following information about the shape: For a rectangle, it outputs the area and perimeter; for a circle, it outputs the area and circumference; and for a cylinder, it outputs the volume and surface area. After rearranging the statements, your program should be properly indented.*/ 

//AUTHOR: F.RUSTIQUE JR.

//CORRECTED AND WORKING ORDER:  
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double PI = 3.1416;

int main()  
{  
    string shape;  
    double height;
    double width;
    double length;
    double radius;      
    
    cout << fixed << showpoint << setprecision(2);  
    cout << "Enter the shape type: (rectangle, circle, cylinder)";  
    cin >> shape;
    cout << endl;  
    
    if (shape == "rectangle"){  
        cout << "Enter the width of the rectangle:";
        cout << endl;   
        cin >> width;  
        cout << "Enter the length of the rectangle:";  
        cout << endl; 
        cin >> length; 
        cout << "Perimeter of the rectangle = " 
            << 2 * (length + width) << endl;
        cout << "Area of the rectangle = " 
            << length * width << endl;    
        }  
          
    else if (shape == "circle"){  
        cout << "Enter the radius of the circle:";  
        cin >> radius;  
        cout << endl;  
        cout << "Area of the circle = " 
            << PI * pow(radius, 2.0) << endl;  
        cout << "Circumference of the circle: " 
            << 2 * PI * radius << endl;  
        }  
        
    else if (shape == "cylinder"){  
        cout << "Enter the height of the cylinder:";  
        cin >> height;  
        cout << endl;  
        cout << "Enter the radius of the base of the cylinder:";
        cout << endl;    
        cin >> radius;  
        cout << "Volume of the cylinder = " 
            << PI * pow(radius, 2.0)* height << endl;
        cout << "Surface area of the cylinder: " 
            << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
        }   
    else  
        cout << "The program does not handle " << shape << endl;  

    return 0;     
}

