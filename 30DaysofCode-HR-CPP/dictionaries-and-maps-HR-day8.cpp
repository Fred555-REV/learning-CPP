// dictionaries-and-maps-HR-day8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	map<string, int> phoneBook;
	string name;
	for (int i = 0; i < n; i++) {
		int phoneNumber;
		cin >> name >> phoneNumber;
		phoneBook.insert({ name, phoneNumber });
	}
	while (cin >> name) {
		if (phoneBook.find(name) != phoneBook.end()) {
			cout << name << "=" << phoneBook.find(name)->second << endl;
		}
		else {
			cout << "Not found" << endl;
		}
	}
	return 0;
}