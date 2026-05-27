/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Functions
==================================================================
*/

#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;

namespace RepeatedElementInArray
{
    int ReadIntNumber(string MessageToUser = "Please enter a Number ?\n")
    {
        int Number = 0;


        cout << MessageToUser;
        cin >> Number;


        return Number;
    }

    void ReadIntArray(int Arr[100], int Length)
    {
        cout << "\nPlease enter array Elements : " << endl;

        for (int i = 0; i < Length; i++)
        {
            Arr[i] = ReadIntNumber("Elenment [" + to_string(i + 1) + "] : ");
        }
    }

    int RepeatedElementInArray(int Element, int Array[100], int Length)
    {
        int RepeatedElement = 0;

        for (int i = 0; i < Length; i++)
        {
            if (Element == Array[i])
                RepeatedElement++;
        }

        return RepeatedElement;
    }

    void PrintIntArray(int Arr[100], int Length, string Header, string WordBetweenElements)
    {
        cout << Header;

        for (int i = 0; i < Length - 1; i++)
        {
            cout << Arr[i] << WordBetweenElements;
        }

        cout << Arr[Length - 1];
    }

    void Run()
    {
        int Array[100], Length = ReadIntNumber();

        ReadIntArray(Array, Length);

        int NumberToCheckInArray = ReadIntNumber("\nEnter the number you want to check : ");

        PrintIntArray(Array, Length, "\nOriginal Array : ", " ");

        cout << "\n" << NumberToCheckInArray << " is repeated ";
        cout << RepeatedElementInArray(NumberToCheckInArray, Array, Length) << " time(s)" << endl;

    }
}