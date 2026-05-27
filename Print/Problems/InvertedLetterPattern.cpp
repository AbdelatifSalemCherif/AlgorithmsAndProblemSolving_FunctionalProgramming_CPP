/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace InvertedLetterPattern
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

    void PrintInvertedLetterPattern(int Number)
    {
        cout << endl;

        for (int i = Number; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << char(i + 64);
            }
            cout << endl;
        }

        cout << endl;
    }

    void Run()
    {

        PrintInvertedLetterPattern(ReadPositiveNumber());

    }
}