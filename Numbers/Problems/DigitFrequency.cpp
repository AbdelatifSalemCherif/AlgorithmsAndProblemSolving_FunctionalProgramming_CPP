/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Function
==================================================================
*/

#include <iostream>
#include <string>

using namespace std;

namespace DigitFrequency
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

    int ReadIntNumberInRange(int From, int To, string MessageToUser)
    {
        int Number;
        do {
            cout << MessageToUser;
            cin >> Number;
        } while (Number<From || Number >To);

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

    int DigitFrequency(int Digit, int Number)
    {
        int Sum = 0;

        do {
            if (Digit == GetRightDigit(Number))
            {
                Sum++;
            }

            Number = DeleteRightDigit(Number);
        } while (Number > 0);

        return Sum;
    }

    void PrintIntNumber(string MessageBefor, int Number, string MessageAfter)
    {
        cout << MessageBefor << Number << MessageAfter;
    }

    void Run()
    {
        int Digit = ReadIntNumberInRange(0, 9, "Please Enter Digit (0 to 9) ?\n");
        PrintIntNumber("\nDigit " + to_string(Digit) + " Frequency is : ", DigitFrequency(Digit, ReadPositiveNumber()), " Time(s)\n");

    }
}