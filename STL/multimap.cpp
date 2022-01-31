/* multimap.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
	multimap<int, string> mm;
	mm.insert(pair<int, string>(2, "a"));
	mm.insert(pair<int, string>(4, "b"));
	mm.insert(pair<int, string>(3, "c"));
	mm.insert(pair<int, string>(1, "d"));
	mm.insert(pair<int, string>(1, "e"));

	for (auto& it : mm)
		cout << "key: " << it.first << "value: " << it.second << endl;

	cout << endl;

	return 0;
}