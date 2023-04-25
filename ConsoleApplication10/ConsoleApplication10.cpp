// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	char light;
	cin >> light;
	switch (light) {
	case'r':
		cout << "stop";
		break;
	case 'o':
		cout << "ready";
		break;
	case 'g':
		cout << "go";
		break;
	default:
		cout << "technical error";
		
	}
	cin.get();
}

