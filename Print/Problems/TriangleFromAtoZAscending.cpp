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

namespace TriangleFromAtoZAscending
{
    void PrintTriangleFromAToF()
    {
        for (int i = 65; i <= 70; i++)
        {
            for (int j = 65; j <= i; j++)
            {
                cout << char(j) << " ";
            }
            cout << endl;
        }
    }

    void Run()
    {

        PrintTriangleFromAToF();

    }
}