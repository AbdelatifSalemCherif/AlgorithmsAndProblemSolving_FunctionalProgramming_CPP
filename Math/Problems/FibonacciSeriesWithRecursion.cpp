/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 21, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Functions
==================================================================
*/

#include <iostream>

using namespace std;

namespace FibonacciSeriesWithRecursion
{
    void PrintFibbonacciSeries(int M)
    {
        static int First = 0, Second = 1, Third = 1;


        cout << Third << "  ";

        Third = First + Second;
        First = Second;
        Second = Third;

        if (M > 1)
        {
            PrintFibbonacciSeries(M - 1);
        }
        else {
            First = 0;
            Second = 1;
            Third = 1;
        }
    }

    void PrintFibbonacciSeries2(int M, short First = 0, short Second = 1)
    {
        if (M > 0)
        {
            cout << Second << "  ";
            PrintFibbonacciSeries2(M - 1, Second, First + Second);
        }
    }

    void Run()
    {
        PrintFibbonacciSeries(10);
        cout << endl;

        PrintFibbonacciSeries2(10);
        cout << endl;

        PrintFibbonacciSeries(10);
        cout << endl;


        PrintFibbonacciSeries2(10);
        cout << endl;

    }
}