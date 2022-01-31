/* tests_loops.cpp
by nafarahisya 25/01/2022
Chapter 2, page 43-44
*/

#include <iostream>
using namespace std;

// make function bool type with if-else
bool accept(char answer){
	if (answer=='y'){
		return true;
	} else{
		return false;
	}
}

// make function bool type with switch-case
bool accept2(char answer){
	switch (answer){
		case 'y':
			return true;
			break;
		case 'n':
			return false;
			break;

		default:
			return true;
			break;
	}
}

int main(){
	// initialize variables, type
	char ch = 1;
	int i = 0;

	// loop with while
	while ((accept(ch) || accept2(ch)) && i < 5){
		cout << i << endl;
		i++;
		cout << "print again?" << endl;
		cin >> ch;
	}

	return 0;
}