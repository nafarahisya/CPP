/* map.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
	map<int, string> a;
	a.insert(pair<int, string>(2, "a"));
	a.insert(pair<int, string>(4, "b"));
	a.insert(pair<int, string>(3, "c"));
	a.insert(pair<int, string>(1, "d"));

	a.insert(pair<int, string>(1, "e")); //unused(map unique)

	for (auto& it : a)
		cout << "key: " << it.first << "value: " << it.second << endl;

	cout << endl;

	return 0;
}
