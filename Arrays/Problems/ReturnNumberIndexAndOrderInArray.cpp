/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include<iostream>
#include<cstdlib>

using namespace std;

namespace ReturnNumberIndexAndOrderInArray
{
    int ReadIntNumber(string MessageToUser)
    {
        int Number = 0;

        cout << MessageToUser;

        cin >> Number;

        return Number;
    }

    int ReadPositiveNumber(string MessageToUser = "Please enter a positive Number \n")
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

    int FounIndexInArray(int Array[100], int ElementToCheck, int Length)
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

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array[100], Length = ReadPositiveNumber();

        RandomArray(Array, Length, 1, 100);

        PrintIntArray(Array, Length, "\nArray elements : \n", " ");

        int ElementToCheckInArray = ReadIntNumber("\nPlease enter a number to search for?\n"),
            IndexOfElementToCheckInArray = FounIndexInArray(Array, ElementToCheckInArray, Length);

        cout << "\nNumber you are looking for is : " << ElementToCheckInArray << endl;

        if (IndexOfElementToCheckInArray != -1)
        {
            cout << "The Number found at position : " << IndexOfElementToCheckInArray << endl;
            cout << "The number found its order : " << IndexOfElementToCheckInArray + 1 << endl;
        }
        else {
            cout << "The Number is not found :-( " << endl;

        }

    }
}