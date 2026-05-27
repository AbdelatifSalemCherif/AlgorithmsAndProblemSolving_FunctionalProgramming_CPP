/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May, 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>

using namespace std;

namespace SumOf2ArraysOn3rdOne
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

    void SumElementsOf2ArraysOn1Array(int Array1[100], int Array2[100], int ArrayOfSum[100], int Length)
    {
        for (int i = 0; i < Length; i++)
        {
            ArrayOfSum[i] = Array1[i] + Array2[i];
        }
    }

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array1[100], Array2[100], ArrayOfSum[100], Length = ReadPositiveNumber();

        RandomArray(Array1, Length, 1, 100);

        RandomArray(Array2, Length, 1, 100);

        SumElementsOf2ArraysOn1Array(Array1, Array2, ArrayOfSum, Length);

        PrintIntArray(Array1, Length, "\nArray 1 Elements : ", " ");

        PrintIntArray(Array2, Length, "\n\nArray 2 Elements : ", " ");

        PrintIntArray(ArrayOfSum, Length, "\n\nSum of array1 and array2 elements : ", " ");

    }
}