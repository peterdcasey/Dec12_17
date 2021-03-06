// Dec12_17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "HelloWorld_2.h"

using namespace std;

class HelloWorld {
public:
	HelloWorld(string s) {
		this->s = s;
	}

	void greet() {
		cout << "hello " << s << endl;
	}

	void update(string s) {
		this->s = s;
	}

private:
	string s;
};

int main() {
	HelloWorld hw{ "world" };
	HelloWorld_2 hw2{ "world_2" };

	hw.greet();
	hw.update("cruel world");
	hw.greet();
	hw2.greet();

    return 0;
}

