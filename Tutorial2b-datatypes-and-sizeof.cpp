// Tutorial2b-datatypes-and-sizeof.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 1995;
    char gender = 'm';
    bool isOldaerThan18 = true;
    float averageGrade = 3.2;
    double balance = 45678945856;

    cout << "Size of int is " << sizeof(int) << " bytes\n";

    cout << "Int min value is" << INT_MIN << endl;
    cout << "Int max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "Uint max value is " << UINT_MAX << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";



    system("pause>0");
}

