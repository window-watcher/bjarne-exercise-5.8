/*
	Project: Section 5.8
	By: Adrian Rodriguez
	Date: 9/2/20
	Objectives: 
	Allow user to enter integers in to a vector.
	Add all values within the vector upto the element selected by the user within a variable.
	Print variable to screen.
	Version 1.0

	Change log
	version 1.0 :

*/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

void integer_Reader() {
	string input;
	int temp = 0;
	vector<int> numbers;

	cout << "Enter some numbers. Enter | to stop." << '\n';
	cin >> input;
	while (input != "|") {
		numbers.push_back(stoi(input));
		cin >> input;
	}

	cout << "Choose the amount of entries to add up. You may enter up to " << numbers.size() << '\n';

	int to_sum = NULL, sum = 0;
	cin >> to_sum;

	if (to_sum > numbers.size()) {
		cerr << "User asked for more numbers then store in vector <int> numbers" << endl;
		throw out_of_range("e"); 
	}
	if (to_sum < 0) {
		cerr << "User asked for a negative number" << endl;
		throw out_of_range("e");
	}
	for (int i = 0; i < to_sum; ++i) {sum += numbers[i];}
	
	cout << "The sum of the first " << to_sum << " numbers : " << sum << endl;

}

int main() //C++ programs start by executing the function main
{
	integer_Reader();
	keep_window_open();//wait for a character to be enter
	return 0;
}