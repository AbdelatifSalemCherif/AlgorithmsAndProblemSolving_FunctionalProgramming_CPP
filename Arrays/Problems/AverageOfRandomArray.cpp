/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>

using namespace std;

namespace AverageOfRandomArray
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

    int GetSumOfElementsOfArray(int Arr[100], int Length)
    {
        int Sum = 0;

        for (int i = 0; i < Length; i++)
        {
            Sum += Arr[i];
        }

        return Sum;
    }

    float GetAverageOfElementsOfArray(int Arr[100], int Length)
    {
        return (float)GetSumOfElementsOfArray(Arr, Length) / Length;
    }

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array[100], LengthArray = ReadPositiveNumber();

        RandomArray(Array, LengthArray, 1, 100);

        PrintIntArray(Array, LengthArray, "\nArray Elements : ", " ");

        cout << "\nAverage of all Numbers is : " << GetAverageOfElementsOfArray(Array, LengthArray) << endl;

    }
}