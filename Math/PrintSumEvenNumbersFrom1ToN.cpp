/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 1, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PrintSumEvenNumbersFrom1ToN
{
    int ReadIntNumber(string MessageToUser)
    {
        int IntNumber;

        cout << MessageToUser;
        cin >> IntNumber;

        return IntNumber;
    }

    int SumEvenNumbersFromNTo1(int N)
    {
        int Sum = 0, i = 0;

        while (i <= N)
        {
            Sum += i;
            i += 2;
        }
        return Sum;
    }

    void PrintIntNumber(string MessageBefore, int Number, string MessageAfter) {

        cout << MessageBefore << Number << MessageAfter;
    }

    void Run()
    {

        PrintIntNumber("\nThe Sum of Even Numbers from N to 1 is : ", SumEvenNumbersFromNTo1(ReadIntNumber("Pleease enter N ?\n")),
            "\n");

    }
}