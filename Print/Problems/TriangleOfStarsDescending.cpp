/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 1, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 2 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace TriangleOfStarsDescending
{
	void PrintTriangleStarts()
	{
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 10 - i + 1; j >= 1; j--)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	void Run()
	{

		PrintTriangleStarts();

	}
}