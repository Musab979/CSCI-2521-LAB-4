/**
 * @file Lab4_maldosari.cpp
 * @author Musab Aldosari
 * @date 2026-09-27
 * @brief A program to generate a multiplication table with input validation.
 */

 #include <iostream>
 using namespace std;

 int main() {
	 int maxDigit;

	 cout << "Please enter the maximum digit for the multiplication table." << endl;
	 cout << "The digit must be greater than 4 and less than 10." << endl;

	 cout << "Max Digit: ";
	 cin >> maxDigit;

	 while (maxDigit <= 4 || maxDigit >= 10) {
		 cout << "Error: The max digit must be greater than 4 and less than 10." << endl;
		 cout << "Please retry." << endl;

		 cout << "Max Digit: ";
		 cin >> maxDigit;
	 }

	 for (int row = 1; row <= maxDigit; row++) {
		 for (int column = 1; column <= maxDigit; column++) {
			 cout << row * column << "\t";
		 }
		 cout << endl;
	 }
	 
	 return 0;
 }
