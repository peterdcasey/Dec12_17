#include "stdafx.h"
#include "HelloWorld_2.h"

HelloWorld_2::HelloWorld_2(std::string s) {
	this->s = s;
}

void HelloWorld_2::greet() {
	std::cout << "hello " << s << std::endl;
}



