/* enumerations.cpp
by nafarahisya 25/01/2022
Chapter 2, page 50
*/

#include <iostream>
using namespace std;

// class enumeration for choice color and traffic light
enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };

Color col = Color::red;
Traffic_light light = Traffic_light::red;

int main(){
	cout << "Enumeration" << endl;
	return 0;
}