#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "wrong number of argument" << std::endl;
		return 1;
	}	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1 == "") {
		std::cout << "wrong argument" << std::endl;
		return 1;
	}

	std::ifstream inputFile(filename.c_str());

	if (!inputFile.is_open()) {
		std::cout << "inputfile open fail" << std::endl;
		return 1;
	}

	std::ostringstream dataStream;
	dataStream << inputFile.rdbuf();
	std::string data = dataStream.str();

	size_t pos = 0;
	while (true)
	{
		pos = data.find(s1, pos);
		if (pos == std::string::npos)
			break ;
		data.erase(pos, s1.size());
		data.insert(pos, s2);
		pos += s2.size();
	}

	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open()) {
		std::cout << ".replace file open fail" << std::endl;
		return 1;
	}
	outputFile << data;	
	std::cout << "Replacement completed" << std::endl;	
	return 0;
}
