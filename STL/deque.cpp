/* deque.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int> dq = {5, 7, 10, 21};
	dq.push_front(18);
	dq.push_back(25);

	for (int a : dq){
		cout << a << " ";
	}
	cout << endl;
	return 0;
	
}
