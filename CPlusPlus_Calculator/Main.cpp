//C++ Calculator
//Aleksandar Bayrev, 2015

#include<iostream>
#include<math.h>

using namespace std;

namespace calculator
{
	double sum(double a, double b)
	{
		return a + b;
	}

	double subtract(double a, double b)
	{
		return a - b;
	}

	double multiply(double a, double b)
	{
		return a * b;
	}

	double divide(double a, double b)
	{
		//Check if b equals 0

		if (b == 0)
		{
			cout << "Division by 0 is impossible!";
			return (double)NAN;
		}

		else
		{
			return a / b;
		}
	}
}

using namespace calculator;

int main()
{
	double a = 0, b = 0; // Initialize variables

	cout << "C++ Calculator\n";
	cout << "Enter first number: ";
	cin >> a; // Input first number

	cout << "Enter second number: ";
	cin >> b; // Input second number

	cout << "Sum: " << sum(a, b) << "\n"; // Print results
	cout << "Subt: " << subtract(a, b) << "\n"; // Print results
	cout << "Multipl: " << multiply(a, b) << "\n"; // Print results

	if (b == 0) //Just because the message "Divide: " shows after the cout in divide()
	{
		divide(a, b);
		cout << "\nNot a number!\n";
	}

	else
	{
		cout << "Divide: " << divide(a, b) << "\n"; // Print results
	}

	system("pause");
	return 0;
}

