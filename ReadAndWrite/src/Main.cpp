#include <iostream>
#include <fstream>
#include <string>

namespace Amogus {

	//Template print function
	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n";
	}

	//Writes to text file
	void WriteToFile(std::string filepath)
	{
		std::ofstream file(filepath);
		std::string FileContent;
		std::getline(std::cin, FileContent);
		file << FileContent;
		file.close();
	}

	void ReadFromFile()
	{
		std::string FileContent;
		std::ifstream openFile("myFile.txt");
		while (std::getline(openFile, FileContent))
		{
			std::cout << "This was written in the file: " << FileContent << "\n";
		}
		openFile.close();

	}

	std::string filepath1 = ("myFile.txt");
}



int main() 
{
	Amogus::Print("sus");

	Amogus::WriteToFile(Amogus::filepath1);

	Amogus::ReadFromFile();
}