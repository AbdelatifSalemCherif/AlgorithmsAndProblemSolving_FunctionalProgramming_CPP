/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>
#include <string>

using namespace std;

namespace InvertedNumberPattern
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

    string NumberInStringOf4(int Number)
    {
        if (Number < 10)
            return to_string(Number) + "  ";
        else if (Number < 100)
            return to_string(Number) + " ";
        else
            return to_string(Number);
    }

    void PrintInvertedNumberPattern(int Number)
    {
        cout << endl;

        for (int i = Number; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << NumberInStringOf4(i);
            }
            cout << endl;
        }

        cout << endl;
    }

    void Run()
    {

        PrintInvertedNumberPattern(ReadPositiveNumber());

    }
}