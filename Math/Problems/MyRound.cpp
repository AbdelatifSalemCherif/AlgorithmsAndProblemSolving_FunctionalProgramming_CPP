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

namespace MyRound
{
	float MyRound(float Number)
	{
		int IntegerPart = Number;
		float FractionalPart = Number - IntegerPart;

		if (FractionalPart > 0)
		{
			return IntegerPart + (FractionalPart >= 0.5);
		}
		else
		{
			return IntegerPart - (FractionalPart <= -0.5);
		}
	}

	void Run()
	{

		cout << "Round Math Librarie of 10 : " << round(10) << endl;
		cout << "Round Math Librarie of 10.3 : " << round(10.3) << endl;
		cout << "Round Math Librarie of 10.7 : " << round(10.7) << endl;
		cout << "Round Math Librarie of -10 : " << round(-10) << endl;
		cout << "Round Math Librarie of -10.3 : " << round(-10.3) << endl;
		cout << "Round Math Librarie of -10.7 : " << round(-10.7) << endl;

		cout << "====================================" << endl;

		cout << "My Round of 10 : " << MyRound(10) << endl;
		cout << "My Round of 10.3 : " << MyRound(10.3) << endl;
		cout << "My Round  of 10.7 : " << MyRound(10.7) << endl;
		cout << "My Round of -10 : " << MyRound(-10) << endl;
		cout << "My Round of -10.3 : " << MyRound(-10.3) << endl;
		cout << "My Round of -10.7 : " << MyRound(-10.7) << endl;
	}
}