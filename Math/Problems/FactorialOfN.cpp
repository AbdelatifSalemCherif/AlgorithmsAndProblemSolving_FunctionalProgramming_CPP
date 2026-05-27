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

namespace FactorialOfN
{
    int ReadIntNumberInRange(int From, int To, string MessageToUser, string MessageOfWrong)
    {
        int IntNumber;

        cout << MessageToUser;
        cin >> IntNumber;

        while (IntNumber<From || IntNumber>To)
        {
            cout << MessageOfWrong;

            cout << MessageToUser;
            cin >> IntNumber;
        }

        return IntNumber;
    }

    int CalculateFactorialOfN(int N)
    {
        int Factorial = 1;
        for (int i = 1; i <= N; i++)
        {
            Factorial *= i;
        }
        return Factorial;
    }

    void PrintIntNumber(string MessageBefore, int Number, string MessageAfter) {

        cout << MessageBefore << Number << MessageAfter;
    }

    void Run()
    {

        PrintIntNumber("\nThe Factorial of N is : ", CalculateFactorialOfN(ReadIntNumberInRange(0, INT_MAX,
            "Please enter a positive Number ?\n", "Wrong! Invalid Number\n")), "\n");

    }
}