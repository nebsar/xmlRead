#pragma once

#include <string>
#include <fstream>
#include<iostream>

class readXML
{
public:
	readXML();
	~readXML();
	std::string fileName;
	void setFile(std::string fileName);
	void readFile();
	void writeStringtoFile();
};

