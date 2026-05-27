/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 21, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>
#include<iomanip>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace Min_MaxNumberInMatrix
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

    void PrintMatrix3_3(int Matrix[3][3], int Setw = 3)
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

    bool CheckIsExistInMatrix(int Matrix[3][3], int NumberLookinFor)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (Matrix[i][j] == NumberLookinFor)
                {
                    return true;
                }
            }

        }

        return false;
    }

    void PrintItersectedNumbersInMatrices(int Matrix1[3][3], int Matrix2[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (CheckIsExistInMatrix(Matrix2, Matrix1[i][j]))
                    cout << Matrix1[i][j] << "  ";
            }
        }
    }

    int MaxNumberInMatrix(int Matrix[3][3])
    {
        int Max = Matrix[0][0];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Max = (Max < Matrix[i][j]) ? Matrix[i][j] : Max;
            }
        }

        return Max;
    }

    int MinNumberInMatrix(int Matrix[3][3])
    {
        int Min = Matrix[0][0];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Min = (Min > Matrix[i][j]) ? Matrix[i][j] : Min;
            }
        }

        return Min;
    }

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3];

        RandomMatrix3_3(Matrix, 1, 100);
        cout << "Matrix 1 Elements :\n";
        PrintMatrix3_3(Matrix);


        MyOutput::PrintNumber("\nMaximum Number is :", MaxNumberInMatrix(Matrix), "\n");

        MyOutput::PrintNumber("\nMinimum Number is : ", MinNumberInMatrix(Matrix), "\n");

    }
}