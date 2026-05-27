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
#include<cmath>

using namespace std;

namespace TriangleFrom1To10Ascending
{
    void PrintTriangleFrom1To10()
    {
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10 - i + 1; j++)
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