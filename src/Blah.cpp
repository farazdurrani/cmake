#include <iostream>
#include <Blah.h>

void Blah::boo() {
	std::cout << "Salam from the Blah.cpp file through CMake file(GLOB_RECURSE SRC_FILES src/*.cpp)" << std::endl;
}
