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

namespace PowerOfM
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

    int CalculateNumberPowerM(int Number, int M)
    {
        int Power = 1;
        for (int i = 1; i <= M; i++)
        {
            Power *= Number;
        }
        return Power;
    }

    void PrintIntNumber(string MessageBefore, int Number, string MessageAfter) {

        cout << MessageBefore << Number << MessageAfter;
    }

    void Run()
    {

        int Number = ReadIntNumberInRange(0, INT_MAX, "Please enter positive Number ? \n", "Wrong! Invalid Number!\n"),
            M = ReadIntNumberInRange(0, INT_MAX, "Please enter positive Number for Power M ? \n", "Wrong! Invalid Number!\n");

        PrintIntNumber("\nThe Number power M is : ", CalculateNumberPowerM(Number, M), "\n");

    }
}