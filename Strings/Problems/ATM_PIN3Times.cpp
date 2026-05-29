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

namespace ATM_PIN3Times
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

    void PIN3Times(string PINcode)
    {
        short Counter = 0;
        while (++Counter <= 3 && !CheckIfRightPIN(PINcode, ReadString("Please enter ATM PIN Code ? \n")))
        {

        }

        if (Counter <= 3)
        {
            cout << "Your Balace is : 5000" << endl;
        }
    }

    void Run()
    {
        PIN3Times("1234");
    }
}