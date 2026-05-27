/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 20, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Functions
==================================================================
*/

#include <iostream>
#include<iomanip>

using namespace std;

namespace OrderedMatrix3x3
{
    void PrintMatrix3_3(int Matrix[3][3], int Setw = 9)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << setw(Setw) << Matrix[i][j] << "    ";
            }

            cout << endl;
        }
    }

    void FillOrderedMatrix3_3(int Matrix[3][3])
    {
        for (short i = 0; i < 3; i++)
        {
            for (short j = 0; j < 3; j++)
            {
                Matrix[i][j] = 3 * i + 1 + j;
            }
        }
    }

    void Run()
    {

        int Matrix[3][3];

        FillOrderedMatrix3_3(Matrix);

        PrintMatrix3_3(Matrix, 3);

    }
}