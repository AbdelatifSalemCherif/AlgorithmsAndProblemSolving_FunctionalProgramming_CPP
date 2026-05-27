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
#include <string>
#include<cstdlib>
#include<iomanip>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace CountNumberInMatrix
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

    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3];

        RandomMatrix3_3(Matrix, 1, 10);
        cout << "Matrix Elements :\n";
        PrintMatrix3_3(Matrix);


        int NumberToCountInMatrix = MyInput::ReadNumberInRange((int)1, 10, "\nEnter the Number to count in matrix ? ");

        MyOutput::PrintNumber("\nNumber " + to_string(NumberToCountInMatrix) + " count in matrix is ",
            CountNumberInMatrix(Matrix, NumberToCountInMatrix), "\n");

    }
}