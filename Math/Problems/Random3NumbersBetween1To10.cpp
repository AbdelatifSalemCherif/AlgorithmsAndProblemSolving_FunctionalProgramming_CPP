/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>

using namespace std;

namespace Random3NumbersBetween1To10
{
    int RandomInRange(int From, int To)
    {
        int Number = rand();

        return (Number % (To - From + 1)) + From;
    }

    void Run()
    {
        srand((unsigned)time(NULL));

        for (int i = 1; i <= 3; i++)
            cout << RandomInRange(1, 10) << endl;

    }
}