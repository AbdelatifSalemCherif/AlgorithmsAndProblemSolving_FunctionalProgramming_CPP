/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 7, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include<iostream>
#include<cstdlib>

using namespace std;

namespace CopyArrayUsingAddArrayElement
{
    int ReadIntNumber(string MessageToUser)
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

    void CopyArray(int OriginalArray[100], int LengthOriginalArray, int ArrayCopy[100], int& LengthArrayCopy)
    {
        LengthArrayCopy = 0;

        for (int i = 0; i < LengthOriginalArray; i++)
        {
            AddElementInArray(ArrayCopy, LengthArrayCopy, OriginalArray[i]);
        }


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

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array1[100], Array2[100], LengthArray1 = ReadPositiveNumber(), LengthArray2 = 0;

        RandomArray(Array1, LengthArray1, 1, 100);

        CopyArray(Array1, LengthArray1, Array2, LengthArray2);

        PrintIntArray(Array1, LengthArray1, "\nArray 1 Elements : ", " ");

        PrintIntArray(Array2, LengthArray2, "\n\nArray 2 Elements : ", " ");

    }
}