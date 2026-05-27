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

namespace ATM_PIN
{
    string ReadString(string MessageToUser)
    {
        string String;

        cout << MessageToUser;
        cin >> String;

        return String;
    }

    bool CheckIfRightPIN(string PINcode, string CodeEnteredByUser)
    {
        if (CodeEnteredByUser == PINcode)
        {
            return true;
        }
        return false;
    }

    void Run()
    {
        string CodeEnteredByUser = ReadString("Please enter ATM PIN Code ?\n");

        if (CheckIfRightPIN("1234", CodeEnteredByUser))
        {
            cout << endl << "Your Balance is : 7500" << endl;
        }

        else {
            cout << endl << "Wrong PIN code!" << endl;
        }

    }
}