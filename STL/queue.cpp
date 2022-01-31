/* queue.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> q;
	q.push(35);
	q.push(20);
	q.push(25);
	while (!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;
	cout << q.size() << ": element on the queue\n" << endl;
	return 0;
}