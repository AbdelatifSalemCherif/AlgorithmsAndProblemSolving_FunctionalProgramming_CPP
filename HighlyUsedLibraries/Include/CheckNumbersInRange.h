/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 24, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 12 Functions
==================================================================
*/

#pragma once

#include<iostream>

using namespace std;

namespace CheckNumbersInRange
{
	inline bool CheckPostiveNumber(int Number)
	{
		return Number >= 0;
	}

	inline bool CheckPostiveNumber(short Number)
	{
		return Number >= 0;
	}

	inline bool CheckPostiveNumber(float Number)
	{
		return Number >= 0;
	}

	inline bool CheckPostiveNumber(double Number)
	{
		return Number >= 0;
	}

	inline bool CheckPostiveNumber(long long Number)
	{
		return Number >= 0;
	}

	inline bool CheckPostiveNumber(long double Number)
	{
		return Number >= 0;
	}







	inline bool CheckNumberInRange(int Number, int From, int To)
	{
		return Number >= From && Number <= To;
	}

	inline bool CheckNumberInRange(short Number, short From, short To)
	{
		return Number >= From && Number <= To;
	}

	inline bool CheckNumberInRange(long long Number, long long From, long long To)
	{
		return Number >= From && Number <= To;
	}

	inline bool CheckNumberInRange(float Number, float From, float To)
	{
		return Number >= From && Number <= To;
	}

	inline bool CheckNumberInRange(double Number, double From, double To)
	{
		return Number >= From && Number <= To;
	}

	inline bool CheckNumberInRange(long double Number, long double From, long double To)
	{
		return Number >= From && Number <= To;
	}




}