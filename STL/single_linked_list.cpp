/* single_linked_list.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <forward_list>
using namespace std;

int main(){
	forward_list<int> a;

	for (int i=0; i<=10; i++){
		a.push_front(i*4);
	}

	for(auto element: a){
		cout << element << " ";
	}

	cout << endl;
	return 0;
}