/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 7, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include <iostream>

using namespace std;

namespace CheckPalindromeArray
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

    bool CheckIsPalindromeArrat(int ArrayToCheck[100], int LengthOfArrayToCheck)
    {
        int Semi_LengthOfArrayToCheck = floor(LengthOfArrayToCheck / 2);

        for (int i = 0; i < Semi_LengthOfArrayToCheck; i++)
        {
            if (ArrayToCheck[i] != ArrayToCheck[LengthOfArrayToCheck - 1 - i])
            {
                return false;
            }
        }

        return true;
    }

    void Run()
    {
        int Array[100], Length = 0;

        ReadArraySimi_Dinamic(Array, Length);

        PrintIntArray(Array, Length, "\n\nArray elements :\n", " ");

        if (CheckIsPalindromeArrat(Array, Length))
        {
            cout << "\n\nYes, Array is Palindrome " << endl;
        }
        else {
            cout << "\n\nNo, Array is NOT Palindrome " << endl;
        }

    }
}