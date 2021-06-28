// if-else-statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int number; 
    cout << "Please enter a whole number: ";
    cin >> number;  //User enters integer number
    //cout << number;   //outputs the number inputed by user
    //cout << number % 2; //outputs if the number inputed is even by dividing that number by 2 until there is a smallest remainder or no remainder.
    if (number % 2 == 0) {
        cout << "You have entered an even number" << endl;
    }
    else {
        cout << "You have entered an odd number" << endl;
    }   // if/else syntax is same as javascript but cout<< instead of console.log

    cout << "Thanks. Bye.";
    

    system("pause>0");
}
