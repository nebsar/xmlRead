#include "pch.h"
#include "readXML.h"
#include <fstream>
#include<iostream>


readXML::readXML()
{
}


readXML::~readXML()
{
}

void readXML::setFile(std::string fileName) {
	mfileName = fileName;
}

void readXML::readFile() {

	std::ifstream inputFile(mfileName);
	std::string row;
	if (inputFile.is_open()) {
		while (std::getline(inputFile, row)) {
				if (row.find("Time")!= std::string::npos)  {				
				stringVector.push_back(row);
			}
				if (row.find("<ns1:Body>") != std::string::npos) {
					    std::getline(inputFile, row);
						stringVector.push_back(row);
				}
		}
		inputFile.close();
	}
}

void readXML::writeStringtoFile() {
	std::ofstream myfile;
	myfile.open("output.txt");
	for (std::string str : stringVector) {
		myfile << str << "\n";
	}

	myfile.close();

}
