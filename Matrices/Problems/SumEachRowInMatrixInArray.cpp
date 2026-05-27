/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 20, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>
#include<iomanip>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace SumEachRowInMatrixInArray
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

    int SumOfRowInMatriw3_3(int Matrix[3][3], short RowPosition)
    {
        int Sum = 0;

        for (short i = 0; i < 3; i++)
        {
            Sum += Matrix[RowPosition][i];
        }

        return Sum;
    }

    void FillArraySumOfRawsMatrix3_3(int Matrix[3][3], int ArrayOfSums[3])
    {

        for (short i = 0; i < 3; i++)
        {
            ArrayOfSums[i] = SumOfRowInMatriw3_3(Matrix, i);
        }
    }

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3];

        RandomMatrix3_3(Matrix, 1, 100);


        cout << "The following is a 3*3 random matrix :" << endl;
        PrintMatrix3_3(Matrix, 4);



        int Sum[3] = { 0,0,0 };

        FillArraySumOfRawsMatrix3_3(Matrix, Sum);


        MyOutput::PrintArray(Sum, 3, "\nThefollowing are the Sum of each row in the matrix :\n", "\n");

    }
}