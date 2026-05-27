/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 21, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>
#include<cstdio>

#include"MyInput.h";

using namespace std;

namespace CheckIdentityMatrix
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

    void PrintMatrix3_3(int Matrix[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%0*d   ", 2, Matrix[i][j]);
            }

            cout << endl;
        }
    }

    bool CheckIsIdentityMatrix(int Matrix[3][3])
    {
        for (short i = 0; i < 3; i++)
        {
            if (Matrix[i][i] != 1)
                return false;

            for (short j = 0; j < i; j++)
            {
                if (Matrix[i][j] != 0)
                    return false;
            }

            for (short j = i + 1; j < 3; j++)
            {
                if (Matrix[i][j] != 0)
                    return false;
            }
        }

        return true;

    }

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

        //RandomMatrix3_3(Matrix, 1, 10);
        cout << "Matrix Elements :\n";
        PrintMatrix3_3(Matrix);

        if (CheckIsIdentityMatrix(Matrix))
        {
            cout << "\nYes : Matrix is identity" << endl;
        }
        else
        {
            cout << "\nNo : Matrix is Not identity" << endl;
        }
    }
}