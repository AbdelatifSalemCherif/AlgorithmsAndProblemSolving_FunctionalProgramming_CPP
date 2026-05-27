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

namespace CopyOnlyPrimeNumbers
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

    bool IsPrimeNumber(int Number)
    {
        if (Number == 2)
            return true;
        if (Number % 2 == 0 || Number == 0 || Number == 1)
            return false;

        for (int i = 3; i < ceil(Number / 2); i += 2)
        {
            if (Number % i == 0)
                return false;
        }
        return true;
    }

    void CopyPrimeNumbersInArray(int OriginalArray[100], int LengthOriginalArray,
        int ArrayOfPrimeNumbers[100], int& LengthArrayOfPrimeNumbers)
    {
        int Counter = 0;
        for (int i = 0; i < LengthOriginalArray; i++)
        {
            if (IsPrimeNumber(OriginalArray[i]))
            {
                ArrayOfPrimeNumbers[Counter++] = OriginalArray[i];

            }
        }

        LengthArrayOfPrimeNumbers = Counter;
    }

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array1[100], Array2[100], LengthArray1 = ReadPositiveNumber(), LengthArray2;

        RandomArray(Array1, LengthArray1, 1, 100);

        CopyPrimeNumbersInArray(Array1, LengthArray1, Array2, LengthArray2);

        PrintIntArray(Array1, LengthArray1, "\nArray 1 Elements : ", " ");

        PrintIntArray(Array2, LengthArray2, "\n\nArray 2 Elements : ", " ");

    }
}