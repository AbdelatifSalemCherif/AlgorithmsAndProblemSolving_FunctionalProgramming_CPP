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
#include<iomanip>

#include"MyInput.h";
#include"MyOutput.h";


using namespace std;

namespace NumberExistsInMatrix
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


    void Run()
    {

        srand((unsigned)time(NULL));

        int Matrix[3][3] = { {0,0,7},{0,0,1},{2,3,4} };

        RandomMatrix3_3(Matrix, 1, 100);
        cout << "Matrix Elements :\n";
        PrintMatrix3_3(Matrix);


        int NumberLookinFor = MyInput::ReadNumber((int)0, "\nPlease enter the number to look for in matrix ? ");

        if (CheckIsExistInMatrix(Matrix, NumberLookinFor))
        {
            cout << "\nYes, it's there" << endl;
        }
        else
        {
            cout << "\nNo, it's Not there" << endl;
        }

    }
}