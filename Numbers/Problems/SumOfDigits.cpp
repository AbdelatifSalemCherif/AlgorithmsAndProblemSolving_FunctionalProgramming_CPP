/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 6 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace SumOfDigits
{
    int ReadPositiveNumber(string MessageToUser = "Please enter a positive Number ?\n")
    {
        int Number = 0;

        do {
            cout << MessageToUser;
            cin >> Number;
        } while (Number < 0);

        return Number;
    }

    int GetRightDigit(int Number)
    {
        return Number % 10;
    }

    int DeleteRightDigit(int Number)
    {
        return Number / 10;
    }

    int SumOfDigits(int Number)
    {
        int Sum = 0;

        while (Number > 0)
        {
            Sum += GetRightDigit(Number);
            Number = DeleteRightDigit(Number);
        }

        return Sum;
    }

    void PrintIntNumber(string MessageBefor, int Number, string MessageAfter)
    {
        cout << MessageBefor << Number << MessageAfter;
    }

    void Run()
    {

        PrintIntNumber("\nSum of Digits= ", SumOfDigits(ReadPositiveNumber()), "\n");

    }
}