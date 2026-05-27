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

namespace PrintLettersFromAtoZ
{
    void PrintFromAtoZ()
    {
        int i = 65;
        while (i <= 90)
        {
            cout << char(i) << endl;
            i++;
        }
    }

    void Run()
    {
        PrintFromAtoZ();

    }
}