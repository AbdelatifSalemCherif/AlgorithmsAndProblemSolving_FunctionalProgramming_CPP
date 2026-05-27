/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 6 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>

using namespace std;

namespace CopyArrayInReverseOrder
{
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

    void CopyArrayInRevearsedOrder(int OriginalArray[100], int LengthOriginalArray, int ArrayCopy[100], int& LengthArrayCopy)
    {
        for (int i = 0; i < LengthOriginalArray; i++)
        {
            ArrayCopy[i] = OriginalArray[LengthOriginalArray - i - 1];
        }

        LengthArrayCopy = LengthOriginalArray;
    }


    void Run()
    {
        srand((unsigned)time(NULL));

        int Arr1[100], Arr2[100], LengthArr1 = ReadPositiveNumber(), LengthArr2;

        RandomArray(Arr1, LengthArr1, 1, 100);

        PrintIntArray(Arr1, LengthArr1, "\n\nArray 1 Elements :\n", " ");

        CopyArrayInRevearsedOrder(Arr1, LengthArr1, Arr2, LengthArr2);

        PrintIntArray(Arr2, LengthArr2, "\n\nArray 2 elements after copying array 1 in revearsed order :\n", " ");

    }
}