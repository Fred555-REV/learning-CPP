// loop-review-HR-day6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        string str1 = "";
        string str2 = "";

        for (int j = 0; j < s.length(); j++) {
            if (j % 2 == 0) {
                str1 += s[j];
            }
            else {
                str2 += s[j];
            }
        }
        cout << str1 << " " << str2 << endl;
    }
    return 0;
}
