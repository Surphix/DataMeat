#include <DataMeat/DataMeat.hpp>

#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>

void display_time(clock_t t) {
	std::cout << (double)(clock() - t) / CLOCKS_PER_SEC;
}

int main(int argc, char** argv) {
	
	DataMeat<std::string> meta;

	meta.push("meta", "Hello, World!");

	std::cout << meta["meta"] << std::endl;
}
