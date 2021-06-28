// Calculating.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int sumTotal = 0;
    int n;
    cout << "Enter number to sum total: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sumTotal = sumTotal + i;
        if (i != n) { 
            cout << i << " + ";
        }
        else {
            cout << n;
        }
    }
    cout << " = " << sumTotal;
    system("pause>0");
}