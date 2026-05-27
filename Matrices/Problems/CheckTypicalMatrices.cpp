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
#include<cstdio>

#include"MyInput.h";

using namespace std;

namespace CheckTypicalMatrices
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

    int SumOfMatrixElements(int Matrix[3][3])
    {
        int Sum = 0;

        for (short i = 0; i < 3; i++)
        {
            for (short j = 0; j < 3; j++)
            {
                Sum += Matrix[i][j];
            }
        }

        return Sum;
    }

    bool CheckTypical2Matrices(int Matrix1[3][3], int Matrix2[3][3])
    {
        for (short i = 0; i < 3; i++)
        {
            for (short j = 0; j < 3; j++)
            {
                if (Matrix1[i][j] != Matrix2[i][j])
                    return false;
            }
        }

        return true;
    }


    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix1[3][3] = { {1,1,1},{2,2,2},{3,3,3} }, Matrix2[3][3] = { {1,1,1},{2,2,2},{3,3,3} };

        //RandomMatrix3_3(Matrix1, 1, 10);
        cout << "Matrix 1 Elements :\n";
        PrintMatrix3_3(Matrix1);

        //RandomMatrix3_3(Matrix2, 1, 10);
        cout << "Matrix 2 Elements :\n";
        PrintMatrix3_3(Matrix2);

        if (CheckTypical2Matrices(Matrix1, Matrix2))
        {
            cout << "\nYes, Matrices are Typical" << endl;
        }
        else
        {
            cout << "\nNo, Matrices are Not Typical" << endl;
        }

    }
}