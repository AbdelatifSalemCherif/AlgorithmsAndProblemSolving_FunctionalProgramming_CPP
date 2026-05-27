/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 21, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>

using namespace std;

namespace FibonacciSeries
{
    //void Swap2Numbers(int Number1, int Number)

    void PrintFibbonacciSeries(int M)
    {
        int First = 0, Second = 1, Third;


        (M >= 1) ? cout << "1" << "  " : cout << "Out of range (Must be greater than 0) !\n";

        for (short i = 2; i <= M; i++)
        {
            Third = First + Second;

            cout << Third << "  ";

            First = Second;
            Second = Third;

        }
    }

    void Run()
    {
        PrintFibbonacciSeries(10);

    }
}