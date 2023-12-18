#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "tusk2.h"

void tusk2()
{
	std::ifstream fin("tusk2.txt", std::ios::in);
	try {
		if (!fin.is_open()) {
			std::exception error("File didn't open");
			throw error;
		}
		if (fin.peek() == EOF) {
			std::exception empty("File is empty");
			throw empty;
		}
		std::ostringstream os;
		std::string s;
		bool has_commas = false;
		while (!fin.eof())
		{
			std::string c;
			fin >> c;
			s += c + ' ';
			if (*(c.end() - 1) == '.')
			{
				if (!has_commas)
					os << s << std::endl;
				has_commas = false;
				s = "";
			}
			else if (*(c.end() - 1) == ',')
			{
				has_commas = true;
			}
		}
		std::cout << os.str();
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
		fin.close();
	}
	system("pause");
}
