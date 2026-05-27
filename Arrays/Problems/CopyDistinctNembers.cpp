/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May, 2026
* Total Functions       : 6 Functions
==================================================================
*/

#include <iostream>

using namespace std;

namespace CopyDistinctNembers
{
    void PrintIntArray(int Arr[100], int Length, string Header, string WordBetweenElements)
    {
        cout << Header;

        for (int i = 0; i < Length - 1; i++)
        {
            cout << Arr[i] << WordBetweenElements;
        }

        cout << Arr[Length - 1];
    }

    void AddElementInArray(int Array[100], int& Length, int ElementToAdd)
    {
        if (Length < 100)
        {
            Length++;
            Array[Length - 1] = ElementToAdd;
        }
    }

    int FindIndexInArray(int Array[100], int Length, int ElementToCheck)
    {
        int Index = -1;

        for (int i = 0; i < Length; i++)
        {
            if (ElementToCheck == Array[i])
            {
                Index = i;
                i = Length;
            }
        }

        return Index;
    }

    bool CheckElementInArray(int Array[100], int Length, int ElementToCheck)
    {
        return (FindIndexInArray(Array, Length, ElementToCheck) > -1);
    }

    void CopyDistinctElementsInArray(int OriginalArray[100], int LengthoriginalArray, int DistinctArray[100],
        int& LengthDistinctArray)
    {
        LengthDistinctArray = 0;

        AddElementInArray(DistinctArray, LengthDistinctArray, OriginalArray[0]);

        for (int i = 1; i < LengthoriginalArray; i++)
        {
            if (!CheckElementInArray(OriginalArray, i, OriginalArray[i]))
            {
                AddElementInArray(DistinctArray, LengthDistinctArray, OriginalArray[i]);
            }
        }
    }

    void Run()
    {
        int Array1[100] = { 10,10,10,50,50,70,70,70,70,90 }, Array2[100], LengthArray1 = 10, LengthArray2 = 0;


        CopyDistinctElementsInArray(Array1, LengthArray1, Array2, LengthArray2);

        PrintIntArray(Array1, LengthArray1, "\nArray 1 Elements : ", " ");

        PrintIntArray(Array2, LengthArray2, "\n\nArray 2 Elements : ", " ");

    }
}