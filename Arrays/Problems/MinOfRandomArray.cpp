/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>

using namespace std;

namespace MinOfRandomArray
{
    int ReadIntNumber(string MessageToUser = "Please enter a Number ?\n")
    {
        int Number = 0;


        cout << MessageToUser;
        cin >> Number;


        return Number;
    }

    int ReadPositiveNumber(string MessageToUser = "Please enter a positive Number ?\n")
    {
        int Number = 0;

        do {
            cout << MessageToUser;
            cin >> Number;
        } while (Number < 0);

        return Number;
    }

    int RandomInRange(int From, int To)
    {
        int Number = rand();

        return (Number % (To - From + 1)) + From;
    }

    void RandomArray(int Arr[100], int Length, int From, int To)
    {
        for (int i = 0; i < Length; i++)
        {
            Arr[i] = RandomInRange(From, To);
        }
    }

    void PrintIntArray(int Arr[100], int Length, string Header, string WordBetweenElements)
    {
        cout << Header;

        for (int i = 0; i < Length - 1; i++)
        {
            cout << Arr[i] << WordBetweenElements;
        }

        cout << Arr[Length - 1];
    }

    int GetMinElementOfArray(int Arr[100], int Length)
    {
        int Min = INT_MAX;

        for (int i = 0; i < Length; i++)
        {
            if (Arr[i] < Min)
            {
                Min = Arr[i];
            }
        }

        return Min;
    }


    void Run()
    {
        srand((unsigned)time(NULL));

        int Array[100], LengthArray = ReadPositiveNumber();

        RandomArray(Array, LengthArray, 1, 100);

        PrintIntArray(Array, LengthArray, "\nArray Elements : ", " ");

        cout << "\nMin Number is : " << GetMinElementOfArray(Array, LengthArray) << endl;

    }
}