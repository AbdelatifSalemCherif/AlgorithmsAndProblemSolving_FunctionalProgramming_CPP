/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 6 Functions
==================================================================
*/

#include<iostream>

using namespace std;

namespace AddArrayElementSimiDynamic
{
    int ReadIntNumber(string MessageToUser)
    {
        int Number = 0;

        cout << MessageToUser;

        cin >> Number;

        return Number;
    }

    bool ReadBooleanint(string MessageToUser)
    {
        bool Bool = false;

        cout << MessageToUser;

        cin >> Bool;

        return Bool;
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

    void ReadArraySimi_Dinamic(int Array[100], int& Length)
    {
        bool ContinueToRead = false;
        for (int i = 0; i < 100; i++)
        {
            AddElementInArray(Array, Length, ReadIntNumber("\nPlease enter a number ? "));
            ContinueToRead = ReadBooleanint("Do you want to add more numbers ? [0]:No [1]:Yes ? ");

            if (!ContinueToRead)
            {
                Length = i + 1;
                i = 100;
            }

        }
    }

    void Run()
    {
        int Array[100], Length = 0;

        ReadArraySimi_Dinamic(Array, Length);

        cout << "\nArray Length : " << Length << endl;

        PrintIntArray(Array, Length, "Array elements : ", " ");

    }
}