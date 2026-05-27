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

namespace PrintMiddleRowAndColOfMatrix
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

    void PrintMiddleRowMatrix(int Matrix[3][3])
    {
        for (short i = 0; i < 3; i++)
        {
            printf("%0*d   ", 2, Matrix[1][i]);
        }
    }

    void PrintMiddleColMatrix(int Matrix[3][3])
    {
        for (short i = 0; i < 3; i++)
        {
            printf("%0*d   ", 2, Matrix[i][1]);
        }
    }

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3];

        RandomMatrix3_3(Matrix, 1, 10);

        cout << "Matrix Elements :\n";
        PrintMatrix3_3(Matrix);


        cout << "\nMiddle Row Of Matrix :\n";
        PrintMiddleRowMatrix(Matrix);

        cout << "\nMiddle Col Of Matrix :\n";
        PrintMiddleColMatrix(Matrix);

    }
}