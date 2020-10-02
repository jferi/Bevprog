#include "std_lib_facilities.h"

int main() 
{
	constexpr double m_to_cm = 100;
	constexpr double in_to_cm = 2.54;
	constexpr double ft_to_cm = 30.48;
	double a;
	double b;
	double min = 0, max = 0;
	string unit;
	double sum;
	double number;

	vector<double> numbers;

	cout << "Enter an integer and a unit after it, such as:(m, cm , in, ft) \n";

while (cin >> a >> unit)
{ 
	if  (unit == "cm"){
		a = a / m_to_cm;
		b = a;
	}
	else if  (unit == "in")
	{
		a = a * in_to_cm / m_to_cm;
		b = a;
	}
	else if  (unit == "ft")
	{
		a = a * ft_to_cm / m_to_cm;
		b = a;
	}
	else if  (unit == "m")
	{
		b = a;
	}
	else 
		cout << "wrong unit" << endl;

	if (b < min)
	{
		min = b;
		cout << min << " m is the smallest so far" << endl;
	}

	if (b > max)
	{
		max = b;
		cout << max << " m is the largest so far" << endl;

	}
	sum += b;
	cout << "the sum of the entered units are: " << sum << " m" << endl;

	number = b;
	numbers.push_back(number);
}

	cout << min << " m is the smallest so far" << endl;
	cout << max << " m is the largest so far" << endl;
	cout << "the number of values entered: " << numbers.size() << endl;
	cout << "the sum of the values: " << sum << " m" << endl;

	sort(numbers);
	for (double numb : numbers)
		cout << numb << " m" << endl;

	/*if (abs(a-b)<0.01)
		cout << "the numbers are almost equal\n";
	if (a < b)
		{
		cout << "the larger value is: " << b << endl;
		cout << "the smaller value is: " << a << endl;
		}
	else if (b < a)
		{
		cout << "the larger value is: " << a << endl;
		cout << "the smaller value is: " << b << endl;
		}
	else if (a == b)
		cout << "the numbers are equal: " << a << '=' << b << endl;*/	
return 0;
}