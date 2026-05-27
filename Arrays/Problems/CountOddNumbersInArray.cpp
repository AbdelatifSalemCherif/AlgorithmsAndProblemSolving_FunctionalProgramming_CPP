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

#include <iostream>
#include<cstdlib>

using namespace std;

namespace CountOddNumbersInArray
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

    bool IsOddNumber(int Number)
    {
        return (Number % 2 != 0);
    }

    int CountOddNumbersInArray(int Array[100], int Length)
    {
        int Counter = 0;

        for (int i = 0; i < Length; i++)
        {
            if (IsOddNumber(Array[i]))
            {
                Counter++;
            }
        }

        return Counter;
    }

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array[100], Length = ReadPositiveNumber();

        RandomArray(Array, Length, 1, 100);

        PrintIntArray(Array, Length, "\nArray elements : ", " ");

        cout << "\nOdd numbers count is : " << CountOddNumbersInArray(Array, Length);

    }
}