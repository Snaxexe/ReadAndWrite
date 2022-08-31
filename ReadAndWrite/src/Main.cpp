#include <iostream>


namespace Amogus {


	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n";
	}


}



int main() 
{
	Amogus::Print(2);
}