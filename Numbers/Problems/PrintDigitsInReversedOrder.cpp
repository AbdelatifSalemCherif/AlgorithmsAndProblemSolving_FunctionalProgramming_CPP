/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PrintDigitsInReversedOrder
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

    void PrintDigitsInAReversedOrder(int Number)
    {
        do
        {
            cout << GetRightDigit(Number) << endl;

            Number = DeleteRightDigit(Number);

        } while (Number > 0);
    }

    void Run()
    {

        PrintDigitsInAReversedOrder(ReadPositiveNumber());

    }
}