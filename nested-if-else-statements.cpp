// nested-if-else-statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float l1, l2, l3; //creates 3 floating number variables
    cout << "Please enter triangle side lengths: \n";
    cin >> l1 >> l2 >> l3;  //allows user to input the value of the 3 floating number variables
    //cout << l1 << " " << l2 << " " << l3 << endl; // outputs the 3 floating number variables
    if (l1 == l2 && l2 == l3) { //checks if all 3 sides are equal
        cout << "The triangle with the side lenghts given would be an equalateral triangle.";
    }
    else if (l1 == l2 || l2 == l3 || l3 == l1) {    //checks if any 2 sides are equal
        cout << "The triangle with the side lenghts given would be an isosceles triangle.";
    }
    else if (l1 != l2 && l2 != l3 && l1 != l3){
        cout << "The triangle with the side lenghts given would be a scalene triangle.";
    }

    system("pause>0");
}
