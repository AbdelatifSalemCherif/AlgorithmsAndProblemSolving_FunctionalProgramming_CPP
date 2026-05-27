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

namespace AAtoZZ
{
    void PrintFromAAtoZZ()
    {
        for (int i = 65; i <= 90; i++)
        {
            for (int j = 65; j <= 90; j++)
            {
                cout << char(i) << char(j) << endl;
            }
        }
    }

    void Run()
    {

        PrintFromAAtoZZ();

    }
}