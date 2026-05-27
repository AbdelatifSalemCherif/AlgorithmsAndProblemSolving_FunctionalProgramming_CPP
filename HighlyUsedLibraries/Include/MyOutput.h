/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 12, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 30 Functions
==================================================================
*/


#pragma once

#include<iostream>
#include<string>
#include<vector>

#include "MyStringProcess.h";

using namespace std;

namespace MyOutput
{
	enum enLeftRightMiddle { Left, Right, Middle };


	inline void PrintNumber(string MessageToUserBefore, int Number, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Number << MessageToUserAfter;

	}

	inline void PrintNumber(string MessageToUserBefore, short Number, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Number << MessageToUserAfter;

	}

	inline void PrintNumber(string MessageToUserBefore, float Number, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Number << MessageToUserAfter;

	}

	inline void PrintNumber(string MessageToUserBefore, long long Number, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Number << MessageToUserAfter;

	}

	inline void PrintNumber(string MessageToUserBefore, double Number, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Number << MessageToUserAfter;

	}

	inline void PrintNumber(string MessageToUserBefore, long double Number, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Number << MessageToUserAfter;

	}

	inline void PrintBoolian(string MessageToUserBefore, bool Bool, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Bool << MessageToUserAfter;

	}

	inline void PrintString(string MessageToUserBefore, string String, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << String << MessageToUserAfter;

	}

	inline void PrintCharacter(string MessageToUserBefore, char Character, string MessageToUserAfter)
	{
		cout << MessageToUserBefore << Character << MessageToUserAfter;

	}








	inline void PrintArray(int Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}

	inline void PrintArray(float Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}

	inline void PrintArray(double Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}

	inline void PrintArray(short Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}

	inline void PrintArray(long long Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}

	inline void PrintArray(long double Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}

	inline void PrintArray(char Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}

	inline void PrintArray(string Arr[], int Length, string Header = "\nArray Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (int i = 0; i < Length; i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Arr[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int i = 0; i < Length; i++)
			{

				cout << Arr[i] << WordBetweenElements;
			}
		}
	}







	inline void PrintVector(vector <int>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (int& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}

	inline void PrintVector(vector <short>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (short& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}

	inline void PrintVector(vector <long long>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (long long& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}

	inline void PrintVector(vector <float>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (float& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}

	inline void PrintVector(vector <double>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (double& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}

	inline void PrintVector(vector <long double>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (long double& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}

	inline void PrintVector(vector <char>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (char& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}

	inline void PrintVector(vector <string>& Vector, string Header = "\nVector Elements :\n", string WordBetweenElements = "\n"
		, string WordBeforePosition = "", bool ShowPosition = false, string WordAfterPoition = "")
	{
		cout << Header;

		if (ShowPosition)
		{
			for (short i = 0; i < Vector.size(); i++)
			{

				cout << WordBeforePosition << i + 1 << WordAfterPoition << Vector[i] << WordBetweenElements;
			}
		}
		else
		{
			for (string& i : Vector)
			{
				cout << i << WordBetweenElements;
			}
		}

	}





	inline string ManipilatorSpaces(string Word, short TotalLength)
	{
		short SpacesLength = TotalLength - Word.length();

		for (short i = 0; i < SpacesLength; i++)
		{
			Word += " ";
		}

		return Word;
	}



	inline void RestScreen()
	{
		system("CLS");
		system("Color 0F");
	}

	inline void SystemPause(string MessageToUser)
	{
		cout << MessageToUser;

		system("pause>0");
	}

	inline void PrintMenue(string Title, vector <string>& ItemsNames_ORDRED, short& NumberOfItems)
	{

		cout << "========================================================================" << endl;
		cout << "\t\t\t" << Title << endl;
		cout << "========================================================================" << endl;

		for (short i = 0; i < NumberOfItems; i++)
		{
			cout << "[" << i + 1 << "] " << ItemsNames_ORDRED[i] << "." << endl;

		}

		cout << "========================================================================" << endl;

	}

	inline void PrintCard(string Title, short TotalLength,
		MyStringProcess::enLeftRightMiddle TitleStayIn = MyStringProcess::enLeftRightMiddle::Left)
	{

		cout << MyStringProcess::ReapetWord("-", TotalLength);
		cout << endl;
		cout << MyStringProcess::FillWordSideWithSameCaracter(Title, ' ', TotalLength, TitleStayIn);
		cout << endl;
		cout << MyStringProcess::ReapetWord("-", TotalLength);

	}





}