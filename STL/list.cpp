/* list.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> a;
	for (char i = 'a'; i <= 'z'; ++i) {
		a.push_back(i);
	}

	for (auto temp = a.begin(); temp != a.end(); ++temp)
		cout << *temp << " ";

	cout << endl;
	return 0;
}