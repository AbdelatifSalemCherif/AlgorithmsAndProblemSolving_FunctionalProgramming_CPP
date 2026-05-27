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
#include"MyOutput.h";

using namespace std;

namespace SumOfMatrix
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

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3];

        RandomMatrix3_3(Matrix, 1, 10);

        cout << "Matrix Elements :\n";
        PrintMatrix3_3(Matrix);

        MyOutput::PrintNumber("\nSum of Matrix is : ", SumOfMatrixElements(Matrix), "\n");

    }
}