/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 20, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

namespace RandomMatrix3x3
{
    int RandomInRange(int From, int To)
    {
        int Number = rand();

        return (Number % (To - From + 1)) + From;
    }

    void RandomMatrix3_3(int Matrix[3][3], int From, int To)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Matrix[i][j] = RandomInRange(From, To);
            }
        }
    }

    void PrintMatrix3_3(int Matrix[3][3], int Setw = 9)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << setw(Setw) << Matrix[i][j] << "     ";
            }

            cout << endl;
        }
    }

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3];

        RandomMatrix3_3(Matrix, 1, 100);

        PrintMatrix3_3(Matrix, 3);

    }
}