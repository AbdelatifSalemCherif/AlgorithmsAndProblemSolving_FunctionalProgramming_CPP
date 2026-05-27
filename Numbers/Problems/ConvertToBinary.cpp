/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 17, 2026 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Function
==================================================================
*/

#include <iostream>
#include<string>

using namespace std;

namespace ConvertToBinary
{
	string ConvertToBinary(unsigned int Number)
	{
		string Binary = "";

		do
		{
			Binary = to_string(Number & 1) + Binary;

			Number = Number >> 1;


		} while (Number != 0);

		return Binary;
	}

	void Run()
	{
		cout << "5 in binary = " << ConvertToBinary(5) << endl;

		cout << "10 in binary = " << ConvertToBinary(10) << endl;

		cout << "32 in binary = " << ConvertToBinary(32) << endl;

		cout << "65 in binary = " << ConvertToBinary(65) << endl;
	}
}