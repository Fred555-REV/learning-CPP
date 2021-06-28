// ASCII-deciphering-ciphering.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char c1, c2, c3, c4, c5;
    //char c2; too tedious
    //char c3; too tedious
    cout<<"Enter 5 letters : "; //outputs words that gives the direction to the user
    cin >> c1 >> c2 >> c3 >> c4 >> c5;  //this allows for the user to input and ciphers out only the first 5 characters to the computer but outputs whatever the user types
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);   //outputs the ASCII number assigned to each of the first 5 characters typed by the user

    system("pause>0");
}
