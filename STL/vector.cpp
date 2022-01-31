/* vector.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	string a = "Helo STL!";
	cout << a << endl;
	vector<int> genap;
	for(int i=0; i!=10; i++){
		genap.push_back(i*2);
	}

	for(int j=0; j<genap.size(); j++){
		cout << genap[j] << " ";
	}
	cout << endl;
	return 0;
}
