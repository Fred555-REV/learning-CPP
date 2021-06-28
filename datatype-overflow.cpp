// datatype-overflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1; // This will result in an error because you can't output more than the max size allowed.

    system("pause>0");
}


