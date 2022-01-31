/* structures.cpp
by nafarahisya 25/01/2022
Chapter 2, page 47-48
*/

#include <iostream>
using namespace std;

// initialize type struct
struct Vector{
	int sz;
	int* elem;
};

// make function void for initialize value struct
void vector_init(Vector& v, int item){
	v.elem = new int[item];
	v.sz = item;
}

// make function int type for read and sum value from user input
int read_and_sum(int item){
	Vector v;
	vector_init(v, item);

	for(int i=0; i!=item; i++){
		cout << "Insert element " << i << ": " << endl;
		cin >> v.elem[i];
	}

	int sum = 0;
	for(int i=0; i!=item; i++){
		sum += v.elem[i];
	}

	cout << "Size vector: " << v.sz << endl;
	return sum;
}

int main(){
	cout << read_and_sum(10) << endl;
	return 0;
}

