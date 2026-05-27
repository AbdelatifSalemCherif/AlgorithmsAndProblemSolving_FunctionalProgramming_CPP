/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 30, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace ValidateAgeBetween18And45
{
    short ReadShortNumber(string MessageToUser)
    {
        short ShortNumber;

        cout << MessageToUser;
        cin >> ShortNumber;

        return ShortNumber;
    }

    bool CheckIfShortNumberInRange(short ShortNumber, short From, short To)
    {
        if (ShortNumber >= From && ShortNumber <= To)
        {
            return true;
        }
        return false;
    }

    void Run()
    {
        short Age = ReadShortNumber("Please enter Age ?\n");

        if (CheckIfShortNumberInRange(Age, 18, 45))
        {
            cout << endl << "Valid" << endl;
        }

        else {
            cout << endl << "Invalid" << endl;
        }

    }
}