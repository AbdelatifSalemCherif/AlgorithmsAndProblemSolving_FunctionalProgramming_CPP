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
#include<cstdio>

#include"MyInput.h";

using namespace std;

namespace MultiplyTwoMatrices
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

    void Mytiply2Matrices(int Matrix1[3][3], int Matrix2[3][3], int MultiplyMatrix[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                MultiplyMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j];
            }
        }

    }

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix1[3][3], Matrix2[3][3], MultiplyMatrix[3][3];

        RandomMatrix3_3(Matrix1, 1, 10);
        RandomMatrix3_3(Matrix2, 1, 10);


        cout << "Matrix 1 :\n";
        PrintMatrix3_3(Matrix1);

        cout << "\nMatrix 2 \n";
        PrintMatrix3_3(Matrix2);

        Mytiply2Matrices(Matrix1, Matrix2, MultiplyMatrix);

        cout << "\nResults :\n";
        PrintMatrix3_3(MultiplyMatrix);

    }
}