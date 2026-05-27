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

namespace SumUntilMinus99
{
    int ReadIntNumber(string MessageToUser)
    {
        int IntNumber;

        cout << MessageToUser;
        cin >> IntNumber;

        return IntNumber;
    }


    int SumOfRandomNumbersFromUser(string MessageToUser, int StopLoop)
    {
        int Number = ReadIntNumber(MessageToUser), Sum = Number;

        while (Number != StopLoop)
        {
            Number = ReadIntNumber(MessageToUser);
            Sum += Number;
        }


        return Sum;
    }

    void PrintIntNumber(string MessageBefore, int Number, string MessageAfter) {

        cout << MessageBefore << Number << MessageAfter;
    }

    void Run()
    {
        PrintIntNumber("\nThe Sum of all your numbers is : ",
            SumOfRandomNumbersFromUser("Please enter a number to add (if you enter 0 you get the sum)\n", 0), "\n");

    }
}