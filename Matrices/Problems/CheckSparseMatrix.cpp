/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 21, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>
#include<iomanip>

#include"MyInput.h";

using namespace std;

namespace CheckSparseMatrix
{
    void RandomMatrix3_3(int Matrix[3][3], int From, int To)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Matrix[i][j] = MyInput::RandomNumberInRange(From, To);
            }
        }
    }

    void PrintMatrix3_3(int Matrix[3][3], int Setw = 2)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                //printf("%0*d   ", 2, Matrix[i][j]);

                cout << setw(Setw) << Matrix[i][j] << "   ";
            }

            cout << endl;
        }
    }

    int CountNumberInMatrix(int Matrix[3][3], int NumberToCount)
    {
        int Counter = 0;

        for (short i = 0; i < 3; i++)
        {
            for (short j = 0; j < 3; j++)
            {
                if (Matrix[i][j] == NumberToCount)
                    Counter++;
            }
        }

        return Counter;
    }

    bool CheckSparseMatrix(int Matrix[3][3])
    {
        return CountNumberInMatrix(Matrix, 0) >= 5;
    }



    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3] = { {0,0,7},{0,0,1},{2,3,4} };

        RandomMatrix3_3(Matrix, 0, 1);
        cout << "Matrix Elements :\n";
        PrintMatrix3_3(Matrix);


        if (CheckSparseMatrix(Matrix))
        {
            cout << "\nYes : It's sparse" << endl;
        }
        else
        {
            cout << "\nNo : It's Not sparse" << endl;
        }

    }
}