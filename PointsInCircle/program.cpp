#include "circle.h"
#include "Point.h"
#include <iostream>
#include <fstream>
#include <string>
#include "program.h"
using namespace std;



void ProccessLine(std::string inputLine) {


	





}









int main(int argc, char* argv[]) {

	string fileName = argv[1];

	ifstream infile(fileName);

	string line;

	while (std::getline(infile,line))
	{
		ProccessLine(line);
	}

	return 0;
}

