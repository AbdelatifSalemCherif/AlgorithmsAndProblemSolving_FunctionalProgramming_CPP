/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 1, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PrintNumbersFrom1ToN
{
    int ReadIntNumber(string MessageToUser)
    {
        int IntNumber;

        cout << MessageToUser;
        cin >> IntNumber;

        return IntNumber;
    }

    void PrintNumbersFrom1ToN(int N) {

        int i = 1;

        while (i <= N) {

            cout << i << " ";
            ++i;
        }

    }

    void Run()
    {

        PrintNumbersFrom1ToN(ReadIntNumber("Please enter N ?\n"));

    }
}