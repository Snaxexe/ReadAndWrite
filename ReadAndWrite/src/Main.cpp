#include <iostream>
#include <fstream>
#include <string>

namespace Amogus {


	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n";
	}

	void WriteToFile(std::string filepath)
	{
		std::ofstream file(filepath);
		std::string FileContent;
		std::getline(std::cin, FileContent);
		file << FileContent;
		file.close();
	}


	std::string filepath1 = ("myFile.txt");
}



int main() 
{
	Amogus::Print("sus");

	Amogus::WriteToFile(Amogus::filepath1);
}