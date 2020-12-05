/* 
   This code was written by following the Visual Studio's Tutorials
   The code content was provided by Visual Studio and was written and tested
   by Andrea Gray (c) 2019.
 */

#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
		<< endl;

	Calculator c;
	while (true) {
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0) {
			cout << "Division by 0 exception" << endl;
			continue;
		}
		else {
			result = c.Calculate(x, oper, y);
		}
		cout << "Result is: " << result << endl;
	}

	return 0;
}