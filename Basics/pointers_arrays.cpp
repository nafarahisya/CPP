/* pointers_arrays.cpp
by nafarahisya 25/01/2022
Chapter 2, page 45-46
*/

#include <iostream>
using namespace std;

// void function to copy array with the same value
void copy_fct(int arr[]){
	int item[10];
	for(auto i=0; i < 10; i++){
		item[i] = arr[i];
	}
	for(int element: item){
		cout << element << endl;
	}
}

// int arr function to copy array with new value
int * copy_fct2(int arr[]){
	for(auto i=0; i<10; i++){
		arr[i] += 1;
	}
	return arr;
}

int main(){
	// initialize arr
	int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	// print using foreach
	for(int element: v){
		cout << element << endl;
	}

	cout << "pointer and address" << endl;
	// pointer(*) and address (&)
	int *p = &v[3];
	int x = *p;
	cout << p << endl;
	cout << *p << endl;
	cout << x << endl;

	// copy array -> void function with same value
	cout << "copy array with same value" << endl;
	copy_fct(v);

	// copy array -> int arr function with new value
	cout << "copy array with new value" << endl;
	for(int element: v){
		cout << element << endl;
	}

	// assign address from auto type
	for(auto& element: v){
		++element;
		cout << element << " ";
	}

	return 0;
}