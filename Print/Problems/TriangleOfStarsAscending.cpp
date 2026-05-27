/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 1, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 2 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace TriangleOfStarsAscending
{
    void PrintTriangleFrom1To10()
    {
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void Run()
    {

        PrintTriangleFrom1To10();

    }
}