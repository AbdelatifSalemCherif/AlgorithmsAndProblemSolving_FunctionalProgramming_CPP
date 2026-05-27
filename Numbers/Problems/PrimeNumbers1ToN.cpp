/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 3, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PrimeNumbers1ToN
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

    bool IsPrimeNumber(int Number)
    {
        if (Number == 2)
            return true;
        if (Number % 2 == 0 || Number == 0 || Number == 1)
            return false;

        for (int i = 3; i < ceil(Number / 2); i += 2)
        {
            if (Number % i == 0)
                return false;
        }
        return true;
    }

    void PrintPrimeNumbersFrom1ToN(int N)
    {
        cout << endl;

        if (N >= 2)
            cout << 2 << endl;

        for (int i = 3; i <= N; i += 2)
        {
            if (IsPrimeNumber(i))
                cout << i << endl;
        }
        cout << endl;
    }

    void Run()
    {

        PrintPrimeNumbersFrom1ToN(ReadPositiveNumber());

    }
}