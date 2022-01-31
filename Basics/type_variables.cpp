/* type_variables.cpp
by nafarahisya 21/01/2022
Chapter 2, page 41-42
*/

#include <iostream>
using namespace std;

//void type function
void print_type(bool b, char c, int num, double db){
	cout << "Boolean: " << b << endl;
	cout << "Char: " << c << endl;
	cout << "Integer: " << num << endl;
	cout << "Double: " << db << endl;
}

int main(){
	bool bo;
	char ch;
	int numint;
	double numdb;

	cout << "Input boolean" << endl;
	cin >> bo; //0 for false, 1 for true
	cout << "Input character" << endl;
	cin >> ch;
	cout << "Input Integer" << endl;
	cin >> numint;
	cout << "Input Double" << endl;
	cin >> numdb; //ex 0.5

	print_type(bo, ch, numint, numdb);

	return 0;
}
