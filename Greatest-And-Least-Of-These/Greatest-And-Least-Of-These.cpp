// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 10/13/19

#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool isRunning = true;
	string userInput = "";
	int minNum, maxNum, newNum;

	cout << "Enter a series of integers and I will tell you which one is the largest and the smallest." << endl;
	cout << "Enter '-99' to exit the program and display your results." << endl;

	cout << "\nEnter an integer (-99 to quit): ";
	cin >> userInput;

	maxNum = stoi(userInput);
	minNum = stoi(userInput);

	if (maxNum == -99 || minNum == -99) { isRunning = false; }

	while (isRunning) {
		cout << "Enter another integer (-99 to quit): ";
		cin >> userInput;
		newNum = stoi(userInput);

		if (newNum == -99) {
			isRunning = false;
		}
		else if (newNum > maxNum) {
			maxNum = newNum;
		}
		else if (newNum < minNum) {
			minNum = newNum;
		}
	}

	cout << "\nThe greatest number that you entered is: " << maxNum << "." << endl;
	cout << "The smallest number that you entered is: " << minNum << "." << endl;
}

