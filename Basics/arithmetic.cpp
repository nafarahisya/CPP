/* arithmetic.cpp
by nafarahisya 21/01/2022
Chapter 2, page 40
*/

#include <iostream>
using namespace std;
#include <complex>

int sum(int num1, int num2){
	return num1 + num2;
}

int substract(int num1, int num2){
	return num1 - num2;
}

int multiply(int num1, int num2){
	return num1 * num2;
}

int divideby(int num1, int num2){
	return num1 / num2;
}

int modulo(int num1, int num2){
	return num1 % num2;
}

void print_result(int resultSum, int resultSub, int resultMult, int resultDiv, int resultMod){
	cout << "Result Sum: " << resultSum << endl;
	cout << "Result Substraction: " << resultSub << endl;
	cout << "Result Multiplication: " << resultMult << endl;
	cout << "Result Divide by: " << resultDiv << endl;
	cout << "Result Modulo: " << resultMod << endl;
}

constexpr int sum_const(int num1, int num2){
	return num1 + num2;
}

int main(){
	// initialize variables, types
	int num1, num2, resultSum, resultSub, resultMult, resultDiv, resultMod;
	cout << "Input number1: " << endl;
	cin >> num1;
	cout << "Input number2: " << endl;
	cin >> num2;

	resultSum = sum(num2, num1);
	resultSub = substract(num2, num1);
	resultMult = multiply(num2, num1);
	resultDiv = divideby(num2, num1);
	resultMod = modulo(num2, num1);
	print_result(resultSum, resultSub, resultMult, resultDiv, resultMod);

	if (num1 > num2){
		cout << "Num1 is greater than Num2" << endl;
	} else if (num1 == num2){
		cout << "Num1 equal with Num2" << endl;
	} else if (num1 < num2){
		cout << "Num1 is less than Num2" << endl;
	}

	double d1 = 2.3;
	double d2 = {2.3};
	if (d1 == d2){
		cout << "db1 same with d2" << endl;
	}

	// complex number with double-precision floating-point lists
	complex<double> z = 1;
	cout << "complex number z1: " << z << endl;

	// complex number with d1 and d2
	complex<double> z2 {d1, d2};
	cout << "complex number z2: " << z2 << endl;

	// complex number initialize
	complex<double> z3 = {1, 2};
	cout << "complex number z3: " << z3 << endl;

	// initialize auto without specific type
	int y = 4;
	auto b = true;
	auto ch = 'x';
	auto i = 123;
	auto d = 1.2;
	auto z_auto = sqrt(y);
	cout << "Result auto boolean value: " << b << endl;
	cout << "Result auto char value: " << ch << endl;
	cout << "Result auto integer value: " << i << endl;
	cout << "Result auto double value: " << d << endl;
	cout << "Result auto sqrt value: " << z_auto << endl;

	// constrant type
	const int dmv = 11;
	int var = 11;
	const double max3 =  1.4 *sqrt(var);

	constexpr double max1 = 1.4 * dmv;
	cout << "Result const max3 value: " << max3 << endl;
	cout << "Result constexpr max1 value: " << max1 << endl;
	cout << "Result constexpr sum value: " << sum_const(max1, max3) << endl;

	return 0;
	
}