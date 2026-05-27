/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 28, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace TaskDurationInSeconds
{
    unsigned int ReadUsignedIntFromUser(string MessageToUser)
    {
        unsigned int Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    unsigned int CalculateTotalSeconds(unsigned int Days, unsigned int Hours, unsigned int Minutes, unsigned int Secondes)
    {

        return Secondes + Minutes * 60 + Hours * 60 * 60 + Days * 60 * 60 * 12;

    }

    void PrintUnsignedIntToUser(string MessageToUserBefore, unsigned int UnsignedInt, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << UnsignedInt << MessageToUserAfter;
    }

    void Run()
    {

        unsigned int Days = ReadUsignedIntFromUser("Please enter the number of days ?"),
            Hours = ReadUsignedIntFromUser("Please enter the number of Hours ?"),
            Minutes = ReadUsignedIntFromUser("Please enter the number of Minutes ?"),
            Secondes = ReadUsignedIntFromUser("Please enter the number of secondes ?");


        PrintUnsignedIntToUser("\nTotal Secondes is : ", CalculateTotalSeconds(Days, Hours, Minutes, Secondes), "\n");

    }
}