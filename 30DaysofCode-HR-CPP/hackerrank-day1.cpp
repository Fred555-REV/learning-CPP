// hackerrank-day1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    int x;
    double y;
    string z;

    /*
    Sample input for test
    12
    4.0
    is the best place to learn and practice coding!*/
    cout << i << " + ";
    cin >> x;
    cout << "\n" << fixed << setprecision(1) << d << " + ";
    cin >> y;
    cout << "\n" << s;
   getline(cin >> ws, z);
    // this getline makes sure that the enter/whitespace after the number inputs are seperately taken in from the string output that I wanted
    //without getline test fails

    cout << i + x << endl;


    cout << fixed << setprecision(1) << d + y << endl;
    //fixed and setprecision allow the number to stay with its decimal .0 which is why my day test failed
     
    cout << s + z << endl;
    /*
    Sample output for test
    16
    8.0
    HackerRank is the best place to learn and practice coding!*/
    return 0;
}
