/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 17, 2026 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>
#include<cmath>

using namespace std;

namespace MyCeil
{
	float MyCeil(float Number)
	{
		int IntegerPart = Number;

		return IntegerPart + (IntegerPart < Number);
	}

	void Run()
	{

		cout << "Ceil Math Librarie of 10 : " << ceil(10) << endl;
		cout << "Ceil Math Librarie of 10.3 : " << ceil(10.3) << endl;
		cout << "Ceil Math Librarie of 10.7 : " << ceil(10.7) << endl;
		cout << "Ceil Math Librarie of -10 : " << ceil(-10) << endl;
		cout << "Ceil Math Librarie of -10.3 : " << ceil(-10.3) << endl;
		cout << "Ceil Math Librarie of -10.7 : " << ceil(-10.7) << endl;

		cout << "====================================" << endl;

		cout << "My Ceil of 10 : " << MyCeil(10) << endl;
		cout << "My Ceil of 10.3 : " << MyCeil(10.3) << endl;
		cout << "My Ceil  of 10.7 : " << MyCeil(10.7) << endl;
		cout << "My Ceil of -10 : " << MyCeil(-10) << endl;
		cout << "My Ceil of -10.3 : " << MyCeil(-10.3) << endl;
		cout << "My Ceil of -10.7 : " << MyCeil(-10.7) << endl;
	}
}