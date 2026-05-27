/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 17, 2026 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>
#include<cmath>

using namespace std;

namespace MyFloor
{
	float MyFloor(float Number)
	{
		int IntegerPart = Number;
		return IntegerPart - (Number < IntegerPart);
	}

	void Run()
	{
		cout << "Floor Math Librarie of 10 : " << floor(10) << endl;
		cout << "Floor Math Librarie of 10.3 : " << floor(10.3) << endl;
		cout << "Floor Math Librarie of 10.7 : " << floor(10.7) << endl;
		cout << "Floor Math Librarie of -10 : " << floor(-10) << endl;
		cout << "Floor Math Librarie of -10.3 : " << floor(-10.3) << endl;
		cout << "Floor Math Librarie of -10.7 : " << floor(-10.7) << endl;

		cout << "====================================" << endl;

		cout << "My Floor of 10 : " << MyFloor(10) << endl;
		cout << "My Floor of 10.3 : " << MyFloor(10.3) << endl;
		cout << "My Floor  of 10.7 : " << MyFloor(10.7) << endl;
		cout << "My Floor of -10 : " << MyFloor(-10) << endl;
		cout << "My Floor of -10.3 : " << MyFloor(-10.3) << endl;
		cout << "My Floor of -10.7 : " << MyFloor(-10.7) << endl;
	}
}