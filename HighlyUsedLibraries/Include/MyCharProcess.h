/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 24, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 2 Functions
==================================================================
*/

#pragma once

#include<iostream>
#include<cctype>

using namespace std;

namespace MyCharProcess
{
	inline char InvertCharacter(char Char)
	{
		return (isupper(Char)) ? tolower(Char) : toupper(Char);
	}

	inline bool CheckVowelLetter(char Letter)
	{
		Letter = tolower(Letter);

		return Letter == 'a' || Letter == 'o' || Letter == 'e' || Letter == 'i' || Letter == 'u';
	}


}