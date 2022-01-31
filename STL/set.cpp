/* set.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <set>
using namespace std;

int main(){
	set<std::string> s;
	s.insert("first");
	s.insert("second");
	s.insert("third");
	s.insert("first");

	cout << "Set size = " << s.size() << endl;

	for(auto& it : s)
		cout << it << " ";
	cout << std::endl;
	return 0;
}