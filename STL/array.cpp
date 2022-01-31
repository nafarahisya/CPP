/* array.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <array>
// #include <vector>
// #include <forward_list>
using namespace std;

int main(){
	array<int, 3> a1{{1, 2, 0}};
	array<int, 3> a2 = {1, 4,3};

	sort(a1.begin(), a1.end());
	copy(a1.begin(), a1.end(). ostream_iterator<int>(cout, " "));
	cout << endl;
	reverse_copy(a2.begin(), a2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
	// vector<int> a;
	// forward_list<int> b;

	// for (int i=0; i<=10; i++){
	// 	a.push_back(2*i);
	// 	b.push_front(3*i);
	// }

	// //use iterator and auto type
	// for (auto element:a) cout << element << "-";
	// cout << endl;
	// for (auto element:b) cout << element << "++";

	// return 0;

}