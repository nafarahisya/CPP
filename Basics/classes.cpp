/* classes.cpp
by nafarahisya 25/01/2022
Chapter 2, page 49
*/

#include <iostream>
using namespace std;

// class vector
class Vector {

// attribute from vector with modifier private
private:
	int* elem;
	int sz;

// function public
public:
	// constructor class vector
	Vector(int item):
	elem{new int[item]},
	sz{item} {}

	// setter attribute element with subscripting
	int& operator[](int i){
		return elem[i];
	}

	// getter size element
	int get_size(){
		return sz;
	}

};

// function int type to read and sum value from user input
int read_and_sum(int item){
	Vector v(item);

	for(int i=0; i!=v.get_size(); i++){
		cout << "Insert element " << i << ": " << endl;
		cin >> v[i];
	}

	int sum = 0;
	for(int i=0; i!=v.get_size(); i++){
		sum += v[i];
	}

	cout << v.operator[](2) << endl;
	return sum;
}

int main(){
	cout << read_and_sum(6) << endl;
	return 0;
}
