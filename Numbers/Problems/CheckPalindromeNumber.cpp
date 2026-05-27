/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 8 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace CheckPalindromeNumber
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

    int GetRightDigit(int Number)
    {
        return (int)Number % 10;
    }

    int DeleteRightDigit(int Number)
    {
        return (int)Number / 10;
    }

    int AddGigitToRight(int Number, int Digit)
    {
        return Number * 10 + Digit;
    }

    int ReversedNumber(int Number)
    {
        int ReversedNumber = 0, Digit;

        do {
            Digit = GetRightDigit(Number);
            Number = DeleteRightDigit(Number);
            ReversedNumber = AddGigitToRight(ReversedNumber, Digit);
        } while (Number != 0);


        return ReversedNumber;
    }

    bool CheckPalindromeNumber(int Number)
    {
        return (Number == ReversedNumber(Number));
    }

    void PrintIfPalindromeNumber(int Number)
    {
        if (CheckPalindromeNumber(Number))
            cout << "\nYes,It is a palindrome number";
        else
            cout << "No,It is not a palindrome number" << endl;

    }

    void Run()
    {
        PrintIfPalindromeNumber(ReadPositiveNumber());

    }
}