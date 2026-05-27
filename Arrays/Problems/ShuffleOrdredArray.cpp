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

#include <iostream>
#include<cstdlib>

using namespace std;

namespace ShuffleOrdredArray
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

    void PrintIntArray(int Arr[100], int Length, string Header, string WordBetweenElements)
    {
        cout << Header;

        for (int i = 0; i < Length - 1; i++)
        {
            cout << Arr[i] << WordBetweenElements;
        }

        cout << Arr[Length - 1];
    }

    void ArrayFrom1ToN(int Array[100], int Length)
    {
        for (int i = 0; i < Length; i++)
        {
            Array[i] = i + 1;
        }
    }

    void Swap2Numbers(int& Number1, int& Number2)
    {
        int Number3;

        Number3 = Number1;
        Number1 = Number2;
        Number2 = Number3;
    }

    void ShuffleArray(int Array[100], int Length)
    {
        int RandomIndex = 0;

        for (int i = 0; i < Length; i++)
        {
            do {
                RandomIndex = RandomInRange(0, Length - 1);
            } while (RandomIndex == i);

            Swap2Numbers(Array[i], Array[RandomIndex]);
        }

    }

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array[100], Length = ReadPositiveNumber();

        ArrayFrom1ToN(Array, Length);

        PrintIntArray(Array, Length, "\nArray elements before Shuffle :\n", " ");

        ShuffleArray(Array, Length);

        PrintIntArray(Array, Length, "\n\nArray elements after Shuffle :\n", " ");

    }
}