/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include<iostream>
#include<cstdlib>

using namespace std;

namespace CheckNumberInArray
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

    void Run()
    {
        srand((unsigned)time(NULL));

        int Array[100], Length = ReadPositiveNumber();

        RandomArray(Array, Length, 1, 100);

        PrintIntArray(Array, Length, "\nArray elements : \n", " ");

        int ElementToCheckInArray = ReadIntNumber("\nPlease enter a number to search for?\n");

        cout << "\nNumber you are looking for is : " << ElementToCheckInArray << endl;

        if (CheckElementInArray(Array, Length, ElementToCheckInArray))
        {

            cout << "Yes, The number is found :-) " << endl;
        }
        else {
            cout << "No, The Number is not found :-( " << endl;

        }
    }
}