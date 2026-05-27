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

namespace PrintAllDigitsFrequency
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
        return (int)Number % 10;
    }

    int DeleteRightDigit(int Number)
    {
        return (int)Number / 10;
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

    void PrintAllDigitsFrequancy(int Number)
    {
        cout << endl;

        short DigitFrequencyVariable = 0;

        for (int i = 0; i < 10; i++)
        {
            DigitFrequencyVariable = DigitFrequency(i, Number);
            if (DigitFrequencyVariable != 0)
                cout << "Digit " << i << " Frequancy is " << DigitFrequencyVariable << " Time(s)" << endl;
        }

        cout << endl;
    }

    void Run()
    {
        PrintAllDigitsFrequancy(ReadPositiveNumber());

    }
}