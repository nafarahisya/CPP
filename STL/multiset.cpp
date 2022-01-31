/* multiset.cpp
by nafarahisya 31/01/2022
STL
*/

#include <iostream>
#include <set>
using namespace std;

int main(){
	multiset<string> ms;
    for (auto s : {"Jakarta", "Surabaya", "Padang", "Malang", "Bandung", "Medan", "Bali", "Malang"}) {
        ms.insert(s);
    }
    ms.insert({"Yogya", "Bogor", "Surabaya", "Jakarta"});
    for (auto& it : ms)
        cout << it << " ";
    
    cout << endl;

    cout << "Convert to a set" << endl;
    set<string> s(ms.begin(), ms.end());
    for (auto& it : s)
        cout << it << " ";

    cout << endl;
    
    return 0;
}