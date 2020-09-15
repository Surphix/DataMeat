#include <DataMeat/DataMeat.hpp>

#include <iostream>

int main(int argc, char** argv) {
	
	DataMeat<std::string> meta;

	meta.push("meta", "Hello, World!");

	std::cout << meta["meta"] << std::endl;
}
