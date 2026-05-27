/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 2 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PrintFromAAAtoZZZ
{
    void PrintAllWordsFromAAAToZZZ()
    {
        cout << endl;

        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
                for (int k = 1; k <= 26; k++)
                {
                    cout << char(i + 64) << char(j + 64) << char(k + 64) << endl;
                }
            }
        }

        cout << endl;
    }

    void Run()
    {

        PrintAllWordsFromAAAToZZZ();

    }
}