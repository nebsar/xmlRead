#pragma once

#include <string>
#include <vector>


class readXML
{
public:
	readXML();
	~readXML();
	std::string mfileName;
	std::vector<std::string> stringVector;
	void setFile(std::string fileName);
	void readFile();
	void writeStringtoFile();
};